#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include "stringUtils.h"

void removeVogais(char string[]){
    int i, j = 0;
    char string_final[100] = "";

    for(i = 0; i < stringLen(string); i++){
        if(isVowel(string[i]) == 0){
            string_final[j] = string[i];
            j++;
        }
        else{
            string[i] = ' ';
        }
    }
    printf("String concatenada: %s\n", string_final);
    printf("String com espaço nas vogais: %s\n", string);
}

int main(){
    char string[100];

    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma string: \n");
    gets(string);

    removeVogais(string);    
}