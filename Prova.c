#include <stdio.h>
    int main (){
        int idade= 0;
        int data= 0; //dados do tipo numerico
        char nome[ 64]= "Alda", //string de caracteres

        printf("Informe o seu nome: ");
        scanf("%s", nome);

        printf("Informe o seu ano de nascimento: ");
        scanf("%d", &data);
        idade= 2024 - data;

        printf("Ola, Eu sou a %s, e tenho %d anos de idade!\n ", nome , idade );

        return 0;

    }