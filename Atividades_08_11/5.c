#include <stdio.h>
#include <locale.h>
#include "stringUtils.h"

int substituiVogal(char string[], char caracter){
    int i, contVogal = 0;

    for(i = 0; i < stringLen(string); i++){
        if(isVowel(string[i]) == 1){
            string[i] = caracter;
            contVogal++;
        }
    }
    return contVogal;
}

int main(){
    int resultado;
    char string[100], caracter;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma string: \n");
    gets(string);

    printf("Digite um caracter: \n");
    scanf("%c", &caracter);

    resultado = substituiVogal(string, caracter);

    printf("Quantidade de vogais substituídas: %d\n", resultado);
    printf("Nova string: %s\n", string);
}