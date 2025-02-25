# include <stdio.h>

int main(void){
    int valor1, valor2, soma;

    printf("Digite um valor: \n");
    scanf("%d", &valor1);

    printf("Digite outro valor: \n");
    scanf("%d", &valor2);

    soma = valor1 + valor2;

    printf("A soma de %d + %d = %d\n", valor1, valor2, soma);

    return 0;
}