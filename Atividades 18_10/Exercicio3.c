#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Escreve um programa que sorteio, aleatoriamente, 10 números e armazene estes em um vetor. Em seguida, o usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. Se estiver, diga a posição que está.

    setlocale(LC_ALL, "Portuguese");
    
    int numeros[10], i, numero, contador;
    
    srand(time(NULL));
    
    for(i = 0; i < 10; i++){
        numeros[i] = rand() % 10; // Limitando de 0 a 9 para ficar mais fácil de testar
    }
    
    printf("Digite um número: \n");
    scanf("%d", &numero);
    
    contador = 0;
    for(i = 0; i < 10; i++){
        if(numero == numeros[i]){
            printf("Número %d foi encontrado na posição %d do vetor.\n", numero, i);
            contador++;
        }
    }
    
    // Caso não encontre no vetor
    if(contador == 0){
        printf("O número %d não foi encontrado no vetor.\n", numero);
    }
}
