#include "config.h"

typedef struct linguagem{
    int i;
    int (*funcao)(char x[]);
    char desc[300];
}linguagem;

int regularA(char x[]);
int regularB(char x[]);
int regularC(char x[]);
int regularD(char x[]);
int regularE(char x[]);
int regularF(char x[]);
int regularG(char x[]);
int regularH(char x[]);
int regularI(char x[]);
int regularJ(char x[]);
int regularK(char x[]);
int regularL(char x[]);
int regularM(char x[]);
int regularN(char x[]);
int regularO(char x[]);
int regularP(char x[]);
int regularQ(char x[]);

linguagem linguagens[] = {
    {'A', regularA, "L(G) = {x | x = (a,b)* onde o número de b’s é par}"},
    {'B', regularB, "L(G) = {x | x = (a,b)* onde o número de b’s é impar}"},
    {'C', regularC, "L(G) = {x | x = (a,b,c)* onde ocorra pelo menos dois padrões ‘abc’}"},
    {'D', regularD, "L(G) = {x | x = (a,b,c)* onde ocorra pelo menos um padrão ‘ac’}"},
    {'E', regularE, "L(G) = {x | x = (0, 1)* e o número de 1’s é múltiplo de 3}"},
    {'F', regularF, "L(G) = {x | x = (a,b,c,d)+ onde a soma de a’s e c’s é impar se x começa com a ou a soma de a’s e d’s é par se x começa com b. Se x inicia por c ou d não existe restrição}"},
    {'G', regularG, "L(G) = {x | x = (a,b,c,d)+ onde a soma de b’s e c’s é impar se x começa com a, ou a soma de a’s e d’s é par se x começa com b. Se x inicia por c ou de não existe restrição}"},
    {'H', regularH, "L(G) = {x | x = (a, b)* e o número de a’s é par e x não possui b's consecutivos}"},
    {'I', regularI, "L(G) = (x | x = (0, 1)+  e se x começa com 0 então o número de 0’s é par, senão o número de 0’s é ímpar}"},
    {'J', regularJ, "L(G) = {x | x = (a, b, c)* e o número de a’s é par e o número de c’s é impar}"},
    {'K', regularK, "L(G) = (x | x = a^n b^m e x possui n par e m ímpar}"},
    {'L', regularL, "L(G) = {x | x = a^n b^m c^k em que n+k seja par e m,n,k >= 0}"},
    {'M', regularM, "L(G) = {x | x = (0, 1)+ e se x começa com 1 então o número de 1’s é ímpar, senão o número de 0’s é ímpar}"},
    {'N', regularN, "L(G) = {x | x = (0, 1)* e o número de 0’s é múltiplo de 4"},
    {'O', regularO, "L(G) = {x | x = (0, 1, 2, ..., 9, “+”, “-”, “.”)+ tal que x é um número real, sem a parte exponencial}"},
    {'P', regularP, "L(G) = {x | x = (0, 1)*, tal que o número de 1’s é múltiplo de 3 E o número de 0’s é par }"},
    {'Q', regularQ, "L(G) = {x | x = (a, b, c, d, e, f, i)* onde todas as vogais estejam ordenadas}"},
};
