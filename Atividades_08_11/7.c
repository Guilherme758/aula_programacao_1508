#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "stringUtils.h"

int main(){
    int i, cont = 0;
    char nome[100];

    setlocale(LC_ALL, "Portuguese");

    for(i = 0; i < 20; i++){
        printf("Digite o %d° nome: \n", i+1);
        gets(nome);
        
        stringToLower(nome);

        if(strstr(nome, "ana") != NULL){
            cont++;
        }

    }
    printf("Quantidade de nomes com ana: %d", cont);
}