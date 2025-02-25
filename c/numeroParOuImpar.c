# include <stdio.h>

int main(void){

    int valor ;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    if(valor%2==0){
        printf("%d é par\n", valor);
    }else{
        printf("%d é impar\n", valor);
    }

    return 0;
}