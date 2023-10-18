#include <stdio.h>
#include <locale.h>

int main()
{
    //Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, qual é o menor e que seus valores.
    setlocale(LC_ALL, "Portuguese");
    
    int numeros[10], maior, menor, i, j, contadorMaior, contadorMenor;
    
    for(i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
    }
    
    for(i = 0; i < 10; i++){
        contadorMaior = 0;
        for(j = 0; j < 10; j++){
            if(numeros[i] >= numeros[j]){
                contadorMaior += 1;
            }
        }
        if(contadorMaior == 10){
            maior = numeros[i];
            break;
        }
    }
    
    for(i = 0; i < 10; i++){
        contadorMenor = 0;
        for(j = 0; j < 10; j++){
            if(numeros[i] <= numeros[j]){
                contadorMenor += 1;
            }
        }
        if(contadorMenor == 10){
            menor = numeros[i];
            break;
        }
    }
    
    printf("Menor número: %d\n", menor);
    printf("Maior número: %d\n", maior);
}
