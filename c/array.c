# include <stdio.h>
# define N_ELEMENTOS 20

int main(void){
    char palavra[N_ELEMENTOS];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("A palavra é %s\n", palavra);

    return 0;
}