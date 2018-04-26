#include "regulares.h"

using namespace std;

// j) L(G) = {x | x  (a, b, c)* e o número de a’s é par
// e o número de c’s é impar}
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
        case 'c': estado = O; result = True;  break;
        case '$': estado = $; result = False; break;
      } break;
      case M: switch (valor){
        case 'a': estado = N; result = True;  break;
        case 'b': estado = M; result = True;  break;
        case 'c': estado = P; result = True;  break;
        case '$': estado = $; result = True; break;
      } break;
      case N: switch (valor){
        case 'a': estado = M; result = True; break;
        case 'b': estado = N; result = True; break;
        case 'c': estado = O; result = True; break;
        case '$': estado = $; result = True; break;
      } break;
      case O: switch (valor){
        case 'a': estado = M; result = True; break;
        case 'b': estado = O; result = True; break;
        case 'c': estado = N; result = True; break;
        case '$': estado = $; result = False; break;
      } break;
      case P: switch (valor){
        case 'a': estado = M; result = True; break;
        case 'b': estado = O; result = True; break;
        case 'c': estado = N; result = True; break;
        case '$': estado = $; result = False; break;
      } break;
    }
  }
  return result;
}


int main(int argc, char const *argv[]) {
  // printf("A - %s\n", regularA("aabaaba$")?"TRUE":"FALSE");
  // printf("B - %s\n", regularB("aabababa$")?"TRUE":"FALSE");
  // printf("C - %s\n", regularC("aaabcccabc$")?"TRUE":"FALSE");
  // printf("D - %s\n", regularD("aabccb$")?"TRUE":"FALSE");
  // printf("E - %s\n", regularE("0101011$")?"TRUE":"FALSE");
  // printf("F - %s\n", regularF("abcd$")?"TRUE":"FALSE");
  // printf("G - %s\n", regularG("abbccdaa$")?"TRUE":"FALSE");
  // printf("H - %s\n", regularH("aabaababa$")?"TRUE":"FALSE");
  // printf("I - %s\n", regularI("0110111$")?"TRUE":"FALSE");
  printf("J - %s\n", regularJ("caacaccac$")?"TRUE":"FALSE");

  return 0;
}
