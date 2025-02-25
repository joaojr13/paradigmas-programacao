# include <stdio.h>

int factorial(int number){
    if(number == 0) return 1;
    else return number * factorial(number - 1);
}

int main(void){

    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    printf("%d!=%d\n", valor, factorial(valor));
    return 0;
}