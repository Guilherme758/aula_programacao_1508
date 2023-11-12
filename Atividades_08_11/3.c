#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include "stringUtils.h"

int countCaracter(char string[], char caracter){
    int i, cont = 0;

    stringToLower(string);

    for(i = 0; i < stringLen(string); i++){
        if(string[i] == caracter){
            cont++;
        }
    }
    return cont;
}

int main(){
    int contagem;
    char string[100], caracter;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite a string: \n");
    gets(string);

    printf("Digite o carácter a ser procurado na string: \n");
    scanf("%c", &caracter);

    contagem = countCaracter(string, tolower(caracter));

    printf("A contagem do carácter %c na string é de: %d", tolower(caracter), contagem);
}