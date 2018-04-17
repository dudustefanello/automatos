#include "config.h"

// a) L(G) = { x | x  (a,b)* onde o número de b’s é par}
int regularA(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case 'a': estado = S; result = True; break;
        case 'b': estado = M; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
      case M: switch (valor){
        case 'a': estado = M; result = True;  break;
        case 'b': estado = N; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case N: switch (valor){
        case 'a': estado = S; result = True;  break;
        case 'b': estado = $; result = False; break;
        case '$': estado = $; result = True;  break;
      } break;
    }
  }
  return result;
}

// b) L(G) = { x | x  (a,b)* onde o número de b’s é impar}
int regularB(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case 'a': estado = S; result = True;  break;
        case 'b': estado = M; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case 'a': estado = M; result = True; break;
        case 'b': estado = S; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
    }
  }
  return result;
}

// c) L(G) = {x | x  (a,b,c)* onde ocorra pelo menos dois padrões ‘abc’}
int regularC(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case 'a': estado = M; result = True;  break;
        case 'b': estado = S; result = True;  break;
        case 'c': estado = S; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case 'a': estado = M; result = True;  break;
        case 'b': estado = N; result = True;  break;
        case 'c': estado = S; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case N: switch (valor){
        case 'a': estado = S; result = True;  break;
        case 'b': estado = S; result = True;  break;
        case 'c': estado = O; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case O: switch (valor){
        case 'a': estado = P; result = True;  break;
        case 'b': estado = P; result = True;  break;
        case 'c': estado = O; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case P: switch (valor){
        case 'a': estado = P; result = True;  break;
        case 'b': estado = Q; result = True;  break;
        case 'c': estado = O; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case Q: switch (valor){
        case 'a': estado = O; result = True; break;
        case 'b': estado = O; result = True; break;
        case 'c': estado = Q; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
    }
  }
  return result;
}

// d) L(G) = {x | x  (a,b,c)* onde ocorra pelo menos um padrão ‘ac’}
int regularD(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case 'a': estado = M; result = True;  break;
        case 'b': estado = S; result = True;  break;
        case 'c': estado = S; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case 'a': estado = M; result = True;  break;
        case 'b': estado = S; result = True;  break;
        case 'c': estado = N; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case N: switch (valor){
        case 'a': estado = N; result = True; break;
        case 'b': estado = N; result = True; break;
        case 'c': estado = N; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
    }
  }
  return result;
}

// e) L(G) = {x | x  (0, 1)* e o número de 1’s é múltiplo de 3}
int regularE(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case '0': estado = S; result = True;  break;
        case '1': estado = M; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case '0': estado = M; result = True; break;
        case '1': estado = N; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
      case N: switch (valor){
        case '0': estado = N; result = True;  break;
        case '1': estado = M; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
    }
  }
  return result;
}

// f) L(G) = { x | x  (a,b,c,d)+ onde a soma de a’s e c’s
//    é impar se x começa com a ou a soma de a’s e d’s
//    é par se x começa com b. Se x inicia por c ou d não existe restrição}
int regularF(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case 'a': estado = M; result = True;  break;
        case 'b': estado = O; result = True;  break;
        case 'c': estado = Q; result = True;  break;
        case 'd': estado = Q; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case 'a': estado = N; result = True; break;
        case 'b': estado = M; result = True; break;
        case 'c': estado = N; result = True; break;
        case 'd': estado = M; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
      case N: switch (valor){
        case 'a': estado = M; result = True;  break;
        case 'b': estado = N; result = True;  break;
        case 'c': estado = M; result = True;  break;
        case 'd': estado = N; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case O: switch (valor){
        case 'a': estado = P; result = True; break;
        case 'b': estado = O; result = True; break;
        case 'c': estado = O; result = True; break;
        case 'd': estado = P; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
      case P: switch (valor){
        case 'a': estado = O; result = True;  break;
        case 'b': estado = P; result = True;  break;
        case 'c': estado = P; result = True;  break;
        case 'd': estado = O; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case Q: switch (valor){
        case 'a': estado = Q; result = True; break;
        case 'b': estado = Q; result = True; break;
        case 'c': estado = Q; result = True; break;
        case 'd': estado = Q; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
    }
  }
  return result;
}

// g) L(G) = { x | x  (a,b,c,d)+ onde a soma de b’s e c’s é impar
//    se x começa com a, ou a soma de a’s e d’s
//    é par se x começa com b. Se x inicia por c ou de não existe restrição}
int regularG(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case 'a': estado = M; result = True;  break;
        case 'b': estado = O; result = True;  break;
        case 'c': estado = Q; result = True;  break;
        case 'd': estado = Q; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case 'a': estado = M; result = True; break;
        case 'b': estado = N; result = True; break;
        case 'c': estado = N; result = True; break;
        case 'd': estado = M; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
      case N: switch (valor){
        case 'a': estado = N; result = True;  break;
        case 'b': estado = M; result = True;  break;
        case 'c': estado = M; result = True;  break;
        case 'd': estado = N; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case O: switch (valor){
        case 'a': estado = P; result = True; break;
        case 'b': estado = O; result = True; break;
        case 'c': estado = O; result = True; break;
        case 'd': estado = P; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
      case P: switch (valor){
        case 'a': estado = O; result = True;  break;
        case 'b': estado = P; result = True;  break;
        case 'c': estado = P; result = True;  break;
        case 'd': estado = O; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case Q: switch (valor){
        case 'a': estado = Q; result = True; break;
        case 'b': estado = Q; result = True; break;
        case 'c': estado = Q; result = True; break;
        case 'd': estado = Q; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
    }
  }
  return result;
}



// i) L(G) = (x | x  (0, 1)+  e se x começa com 0 então o número de 0’s é par,
//    senão o número de 0’s é ímpar}
int regularI(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case '0': estado = M; result = True;  break;
        case '1': estado = N; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case '0': estado = O; result = True;  break;
        case '1': estado = M; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case N: switch (valor){
        case '0': estado = P; result = True;  break;
        case '1': estado = N; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case O: switch (valor){
        case '0': estado = M; result = True;break;
        case '1': estado = O; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
      case P: switch (valor){
        case '0': estado = N; result = True; break;
        case '1': estado = P; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
    }
  }
  return result;
}
