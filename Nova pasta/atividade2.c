#include <stdio.h>
#include <locale.h>

int main(){
	//Escreva um programa que recebe um número de ponto flutuante do usuário e informe se a parte inteira é par ou ímpar.
	float num;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número:\n");
	scanf("%f", &num);
	
	if((int)num % 2 == 0){
		printf("A parte inteira de %f é par (%d)", num, (int)num);
	}
	else{
		printf("A parte inteira de %f é impar (%d)", num, (int)num);
	}
}

