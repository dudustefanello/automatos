#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include "regulares.cpp"
#include "entrada.h"

using namespace std;

FILE *arquivo;

void imprimir(tipoEntrada entrada){
  fprintf(arquivo, "%c) %s\n", entrada.i, linguagens[entrada.i - 65].desc);
  for(auto &e: entrada.teste){
    if (strlen(e.in) > 0){
      fprintf(arquivo, "%11s > ", e.in);
      fprintf(arquivo, "%s\n", linguagens[entrada.i - 65].funcao(e.in)?"TRUE" : "FALSE");
    }
  }
  fprintf(arquivo, "\n");
}

int main(){
  arquivo = fopen("saida.txt", "w");

  for(auto &i: entradas) imprimir(i);

  fclose(arquivo);

  kill(getppid(), SIGKILL);
}
