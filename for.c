#include <stdio.h>
#include <locale.h>

int main(){
	int numero, index, resultado;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero: \n");
	scanf("%d", &numero);
	
	resultado = 1;
		
	for(index = numero; index > 1; index--){
		resultado = resultado * index;
		printf("N�mero %d\n", resultado);
	}
}
