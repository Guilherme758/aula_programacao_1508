#include <stdio.h>
#include <locale.h>

int main(){
	//Escreva um programa que recebe dois números do usuário e informa se o segundo é divisor do primeiro.
	int num1, num2;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o primeiro número:\n");
	scanf("%d", &num1);
	
	printf("Digite o segundo número:\n");
	scanf("%d", &num2);
	
	if(num2 == 0){
		printf("Não é possível dividir por 0");
	}
	else{
		if(num1 % num2 == 0){
			printf("%d é divisor de %d", num2, num1);
		}
	    else{
			printf("%d não é divisor de %d", num2, num1);
		}
	}
}
