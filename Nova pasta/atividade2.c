#include <stdio.h>
#include <locale.h>

int main(){
	//Escreva um programa que recebe um n�mero de ponto flutuante do usu�rio e informe se a parte inteira � par ou �mpar.
	float num;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero:\n");
	scanf("%f", &num);
	
	if((int)num % 2 == 0){
		printf("A parte inteira de %f � par (%d)", num, (int)num);
	}
	else{
		printf("A parte inteira de %f � impar (%d)", num, (int)num);
	}
}

