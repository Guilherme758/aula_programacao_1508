#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include "stringUtils.h"

int comparaString(char string1[], char string2[]){
    int i;
    
    if(stringLen(string1) != stringLen(string2)){        // Se o tamanho n�o for igual, nem faz sentido comparar
        return 0;
    }

    for(i = 0; i < stringLen(string1); i++){
        if(tolower(string1[i]) == tolower(string2[i])){} // Se for igual, continua o loop at� o final. Se tudo for igual, retorna 1 no final
        else{                                            // Se s� um car�cter n�o bater, j� retorna 0, pois a string n�o � igual
            return 0;
        }
    }
    return 1;
}

int main(){
    int resultado;
    char string1[100], string2[100];

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a 1� String: \n");
    gets(string1);

    printf("Digite a 2� String: \n");
    gets(string2);

    resultado = comparaString(string1, string2);

    if(resultado == 1){
        printf("As strings s�o iguais");
    }
    else{
        printf("As strings s�o diferentes");
    }
}