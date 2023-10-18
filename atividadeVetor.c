#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[20], soma = 0;
	int i = 0, j = 0, contadorMaior = 0, contadorMenor = 0, maior, menor;
	float media = 0, desvioPadrao = 0, auxDesvioPadrao = 0;
	
	for(i = 0; i < 20; i++){
		scanf("%d", &numeros[i]);
		soma += numeros[i];
	}
	
	media = (float)soma / 20;
	
	for(i = 0; i < 20; i++){
		auxDesvioPadrao = media - numeros[i];
		
		if(auxDesvioPadrao < 0){
			desvioPadrao += auxDesvioPadrao * -1;
		}
		else{
			desvioPadrao += auxDesvioPadrao;
		}
		

	}
	desvioPadrao = (float)desvioPadrao / 20;
	
	// Printa se o número é impar ou par
	for(i = 0; i < 20; i++){
		if(numeros[i] % 2 == 0){
			printf("Número par: %d\n", numeros[i]);
		}
		else{
			printf("Número ímpar: %d\n", numeros[i]);
		}
	}
	
	// Contador do maior número no vetor
	for(i = 0; i < 20; i++){
		contadorMaior = 0;
		for(j = 0; j < 20; j++){
			if(numeros[i] >= numeros[j]){
				contadorMaior += 1;	
		}
		if(contadorMaior == 20){
			maior = numeros[i];
			break;
		}
		}
	}
	
	//Contador do menor número no vetor
	for(i = 0; i < 20; i++){
		contadorMenor = 0;
		for(j = 0; j < 20; j++){
			if(numeros[i] <= numeros[j]){
				contadorMenor += 1;	
		}
		if(contadorMenor == 20){
			menor = numeros[i];
			break;
		}
		}
	}
	
	printf("\nMaior número: %d\n", maior);
	printf("Menor número: %d\n", menor);
	printf("Soma: %d\n", soma);
	printf("Media: %f\n", media);
	printf("Desvio Padrão: %f\n", desvioPadrao);
}
