#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "stringUtils.h"

void countLetrasRepetidas(char string[]){
    int cont_letras_repetidas[100];
    int i, j, cont, cont_vetor = 0;
    char string_aux[100] = "";

    for(i = 0; i < stringLen(string); i++){
        cont = 0;
        if(strchr(string_aux, (int) string[i]) == NULL){         // Se a letra já existir no meu vetor auxiliar, eu não faço outro FOR nela
            for(j = 0; j < stringLen(string); j++){
                if(string[i] == string[j] && string[i] != ' '){  // Ignora espaço em branco
                    cont++; 
                }
            }
            if(cont > 1){                                        // Insiro nos vetores apenas se encontrou a letra mais de uma vez
                string_aux[cont_vetor] = string[i];
                cont_letras_repetidas[cont_vetor] = cont;
                cont_vetor++;
            }
        }
    }
    printf("Letras repetidas: \n");
    
    for(i = 0; i < stringLen(string_aux); i++){
        printf("%c: %d\n", string_aux[i], cont_letras_repetidas[i]);
    }
}

int main(){
    char string[100];

    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma string: \n");
    gets(string);

    countLetrasRepetidas(string);
}