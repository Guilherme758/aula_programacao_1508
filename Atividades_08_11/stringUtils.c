#include <ctype.h>
#include <string.h>

#define STRING_MAX_LENGTH 1000

// Modifica o vetor passado, colocando o carácteres em minúsculo
void stringToLower(char string[]){
    int i;

    for(i = 0; i < strlen(string); i++){
        string[i] = tolower(string[i]);
    }
}

// Retorna o tamanho da string, excluindo da contagem o carácter de terminação \0
int stringLen(char string[]){
    int i, cont = 0;

    for(i = 0; i < STRING_MAX_LENGTH; i++){
        if(string[i] != '\0'){
            cont++;
        }
        else{
            break;
        }
    }
    return cont;
}

// Retorna 1 caso seja vogal ou 0 caso não seja
int isVowel(char caracter){
    switch(caracter){
        case 'a':
            return 1;
        case 'A':
            return 1;
        case 'e':
            return 1;
        case 'E':
            return 1;
        case 'i':
            return 1;
        case 'I':
            return 1;
        case 'o':
            return 1;
        case 'O':
            return 1;
        case 'u':
            return 1;
        case 'U':
            return 1;
        default:
            return 0;
    }
}

// Retorna quantas vezes um determinado carácter apareceu na string
int countChar(char string[], char caracter){
    int i, cont = 0;

    for(i = 0; i < stringLen(string); i++){
        if(string[i] == caracter){
            cont++;
        }
    }
    return cont;
}