#include <stdio.h>
    int main (){
        int soma;
        int x;
        int y;

        printf("Introduz um numero inteiro: ");
        scanf("%d", &x);

        printf("Introduz outro numero inteiro: ");
        scanf("%d", &y);

        soma= x+y;

        printf("A soma dos dois numeros: %d \n", soma);
    }