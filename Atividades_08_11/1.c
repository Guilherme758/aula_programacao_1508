#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
#include "stringUtils.h"

int validaEntrada(char nome[], char sexo, int idade){    
    stringToLower(nome);

    if(tolower(sexo) == 'f' && strstr(nome, "ana") != NULL && idade < 25){
        return 1;
    }
    else if(tolower(sexo) == 'm' && strstr(nome, "marcio") != NULL && idade < 30){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int idade, resultado;
    char nome[100], sexo;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite seu nome: \n");
    gets(nome);

    printf("Digite seu gênero (m ou f): \n");
    scanf("%c", &sexo);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    resultado = validaEntrada(nome, sexo, idade);

    if(resultado == 1){
        printf("Entrada permitida");
    }
    else{
        printf("Entrada proibida");
    }
}