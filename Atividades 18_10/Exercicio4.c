#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Escreva um programa que preencha aleatoriamente dois vetores com 10 números inteiros depois imprima os dois vetores e informe quantos números repetidos possuem nos dois vetores.

    setlocale(LC_ALL, "Portuguese");
    
    int numeros[10], numeros2[10], i, j, contador = 0;
    
    srand(time(NULL));
    
    for(i = 0; i < 10; i++){
        numeros[i]  = rand() % 10; // Limitando de 0 a 9 para ficar mais fácil de testar
        numeros2[i] = rand() % 10; // Limitando de 0 a 9 para ficar mais fácil de testar
    }
    
    for(i = 0; i < 10; i++){
        printf("Vetor 1:\n");
        printf("%d\n", numeros[i]);
    }
    
    for(i = 0; i < 10; i++){
        printf("Vetor 2:\n");
        printf("%d\n", numeros2[i]);
    }
    
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(numeros[i] == numeros2[j]){ // Valida se o número no vetor 1 existe no vetor 2. Faz um break se existir e incrementa o contador. Ele pode acabar contando números repetidos, acabei não entendendo se era pra ser assim mesmo ou devia ter um tratamento para contar apenas números diferentes
                contador++;
                break;
            }
        }
    }
    
    printf("Números repetidos entre os vetores: %d\n", contador);
}
