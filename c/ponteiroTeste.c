#include <stdio.h>

int main(void){
    int valor, *ponteiro;
    printf("Digite um valor: ");
    scanf("%d", &valor);


    printf("Valor antes de ser manipulado pelo ponteiro: %d\n", valor);

    ponteiro = &valor;
    (*ponteiro)++;

    printf("Valor incrementado usando o ponteiro = %d\n", valor);

    return 0;
}