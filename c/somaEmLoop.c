# include <stdio.h>

int main(void){
    int nTermos, contador, soma;

    printf("Digite a quantidade de termos da soma: ");
    scanf("%d", &nTermos);

    soma =0;
    for(contador = 1; contador <= nTermos; contador++){
        soma += contador;
    }

    printf("A soma de 1+2 + ... + %d = %d\n", nTermos, soma);

    return 0;
}