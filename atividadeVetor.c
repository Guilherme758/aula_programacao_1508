#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[20], soma = 0;
	int i = 0;
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
	
	for(i = 0; i < 20; i++){
		for(j = 0; j < 20; j++){
			
		}
	}
	
	printf("Soma: %d\n", soma);
	printf("Media: %f\n", media);
	printf("Desvio Padrão: %f\n", desvioPadrao);
}
