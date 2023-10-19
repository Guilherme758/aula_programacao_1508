#include <stdio.h>
#include <locale.h>

int main()
{
    //Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.A (Progressão Aritmética), armazenando esses valores em um vetor de tamanho 10.

    setlocale(LC_ALL, "Portuguese");
    
    float numeros[10], razao, numero_inicial;
    int i;
    
    // Armazenando o termo inicial da PA no vetor
    printf("Digite o número inicial: \n");
    scanf("%f", &numeros[0]);
    
    printf("Digite a razao: \n");
    scanf("%f", &razao);
    
    // Calculando os números seguintes ao valor inicial
    for(i = 1; i < 10; i++){
        numeros[i] = numeros[0] + i * razao;
    }
    
    for(i = 0; i < 10; i++){
        printf("Posição %d: %f\n", i + 1, numeros[i]);
    }
}
