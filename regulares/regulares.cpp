#include "regulares.h"

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
        case '$': estado = $; result = False; break;
      } break;
      case N: switch (valor){
        case '0': estado = N; result = True;  break;
        case '1': estado = O; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case O: switch (valor){
        case '0': estado = O; result = True;  break;
        case '1': estado = M; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
    }
  }
  return result;
}

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
        case '$': estado = $; result = False; break;
      } break;
      case N: switch (valor){
        case 'a': estado = N; result = True;  break;
        case 'b': estado = M; result = True;  break;
        case 'c': estado = M; result = True;  break;
        case 'd': estado = N; result = True;  break;
        case '$': estado = $; result = True; break;
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

int regularH(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case 'a': estado = M; result = True;  break;
        case 'b': estado = N; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case 'a': estado = O; result = True;  break;
        case 'b': estado = P; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case N: switch (valor){
        case 'a': estado = M; result = True;  break;
        case 'b': estado = $; result = False; break;
        case '$': estado = $; result = True;  break;
      } break;
      case O: switch (valor){
        case 'a': estado = M; result = True; break;
        case 'b': estado = N; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
      case P: switch (valor){
        case 'a': estado = N; result = True;  break;
        case 'b': estado = $; result = False; break;
        case '$': estado = $; result = False; break;
      } break;
    }
  }
  return result;
}

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

int regularJ(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case 'a': estado = N; result = True;  break;
        case 'b': estado = S; result = True;  break;
        case 'c': estado = M; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case 'a': estado = O; result = True;  break;
        case 'b': estado = M; result = True;  break;
        case 'c': estado = S; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
      case N: switch (valor){
        case 'a': estado = S; result = True; break;
        case 'b': estado = N; result = True; break;
        case 'c': estado = O; result = True; break;
        case '$': estado = $; result = False; break;
      } break;
      case O: switch (valor){
        case 'a': estado = M; result = True; break;
        case 'b': estado = O; result = True; break;
        case 'c': estado = N; result = True; break;
        case '$': estado = $; result = False; break;
      } break;
    }
  }
  return result;
}

int regularK(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case 'a': estado = M; result = True;  break;
        case 'b': estado = N; result = True; break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case 'a': estado = S; result = True;  break;
        case 'b': estado = $; result = False;  break;
        case '$': estado = $; result = False;  break;
      } break;
      case N: switch (valor){
        case 'a': estado = $; result = False; break;
        case 'b': estado = O; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
      case O: switch (valor){
        case 'a': estado = $; result = False; break;
        case 'b': estado = N; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case P: switch (valor){
        case 'a': estado = $; result = False; break;
        case 'b': estado = O; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
      case Q: switch (valor){
        case 'a': estado = $; result = False; break;
        case 'b': estado = N; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
    }
  }
  return result;
}

int regularL(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case 'a': estado = M; result = True;  break;
        case 'b': estado = N; result = True; break;
        case 'c': estado = Q; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
      case M: switch (valor){
        case 'a': estado = S; result = True;  break;
        case 'b': estado = O; result = True;  break;
        case 'c': estado = P; result = True;  break;
        case '$': estado = $; result = False;  break;
      } break;
      case N: switch (valor){
        case 'a': estado = $; result = False; break;
        case 'b': estado = N; result = True;  break;
        case 'c': estado = Q; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
      case O: switch (valor){
        case 'a': estado = $; result = False; break;
        case 'b': estado = O; result = True;  break;
        case 'c': estado = P; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case P: switch (valor){
        case 'a': estado = $; result = False; break;
        case 'b': estado = $; result = False;  break;
        case 'c': estado = Q; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
      case Q: switch (valor){
        case 'a': estado = $; result = False; break;
        case 'b': estado = $; result = False;  break;
        case 'c': estado = P; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
    }
  }
  return result;
}

int regularM(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case '0': estado = N; result = True;  break;
        case '1': estado = M; result = True; break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case '0': estado = M; result = True;  break;
        case '1': estado = S; result = True;  break;
        case '$': estado = $; result = True;  break;
      } break;
      case N: switch (valor){
        case '0': estado = S; result = True; break;
        case '1': estado = N; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
    }
  }
  return result;
}

int regularN(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case '0': estado = S; result = True;  break;
        case '1': estado = M; result = True; break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case '0': estado = M; result = True;  break;
        case '1': estado = N; result = True;  break;
        case '$': estado = $; result = False;  break;
      } break;
      case N: switch (valor){
        case '0': estado = N; result = True; break;
        case '1': estado = O; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case O: switch (valor){
        case '0': estado = O; result = True;  break;
        case '1': estado = P; result = True;  break;
        case '$': estado = $; result = False;  break;
      } break;
      case P: switch (valor){
        case '0': estado = P; result = True; break;
        case '1': estado = M; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
    }
  }
  return result;
}

int regularO(char x[]){
  //Nao compreendi a regra
}

int regularP(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case '0': estado = M; result = True;  break;
        case '1': estado = N; result = True; break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case '0': estado = S; result = True;  break;
        case '1': estado = O; result = True;  break;
        case '$': estado = $; result = False;  break;
      } break;
      case N: switch (valor){
        case '0': estado = O; result = True; break;
        case '1': estado = P; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case O: switch (valor){
        case '0': estado = N; result = True;  break;
        case '1': estado = Q; result = True;  break;
        case '$': estado = $; result = False;  break;
      } break;
      case P: switch (valor){
        case '0': estado = Q; result = True; break;
        case '1': estado = R; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case Q: switch (valor){
        case '0': estado = P; result = True; break;
        case '1': estado = T; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case R: switch (valor){
        case '0': estado = T; result = True;  break;
        case '1': estado = N; result = True;  break;
        case '$': estado = $; result = True;  break;
      } break;
      case T: switch (valor){
        case '0': estado = R; result = True; break;
        case '1': estado = O; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
    }
  }
  return result;
}

int regularQ(char x[]){
  int estado = 1;
  bool result = True;
  char valor;

  for (size_t i = 0; i < strlen(x) || estado > 0; i++) {
    valor = x[i];
    switch (estado) {
      case S: switch (valor){
        case 'a': estado = S; result = True;  break;
        case 'b': estado = S; result = True;  break;
        case 'c': estado = S; result = True;  break;
        case 'd': estado = S; result = True;  break;
        case 'e': estado = M; result = True;  break;
        case 'f': estado = S; result = True;  break;
        case 'i': estado = N; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
      case M: switch (valor){
        case 'a': estado = $; result = False;  break;
        case 'b': estado = M; result = True;  break;
        case 'c': estado = M; result = True;  break;
        case 'd': estado = M; result = True;  break;
        case 'e': estado = M; result = True;  break;
        case 'f': estado = M; result = True;  break;
        case 'i': estado = N; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
      case N: switch (valor){
        case 'a': estado = $; result = False;  break;
        case 'b': estado = N; result = True;  break;
        case 'c': estado = N; result = True;  break;
        case 'd': estado = N; result = True;  break;
        case 'e': estado = $; result = False;  break;
        case 'f': estado = N; result = True;  break;
        case 'i': estado = N; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
    }
  }
  return result;
}
