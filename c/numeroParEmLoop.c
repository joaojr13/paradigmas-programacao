#include <stdio.h>
#include "isEven.c"

int main(void){
    int nTerms, contador, soma;

    printf("Digite o maior termo da soma: ");
    scanf("%d", &nTerms);

    soma = 0;
    for (contador = 0; contador <= nTerms; contador++)
    {
        if(isEven(contador)){
            soma += contador;
        }
    }

    printf("A soma de 2 + 4 + ... + %d = %d\n", 2*(nTerms/2), soma);
    return 0;
}