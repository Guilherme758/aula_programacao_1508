#include <stdio.h>
#include <locale.h>

int main(){
	//Calcular Fibonnaci
	long numero, index;
	unsigned long long aux1, aux2 = 0, resultado = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número: \n");
	scanf("%d", &numero);
	
	for(index=1;index<=numero;index++){
		if(index == 1){
			aux1 = 1;
			aux2 = 0;
			printf("Posição %d: %llu\n", index, aux1);
		}
		else{
			resultado = aux1 + aux2;
			printf("Posição %d: %llu\n", index, resultado);
			aux2 = aux1;
			aux1 = resultado;
		}
	}
}
