#include <stdio.h>
#include <locale.h>

int main(){
	//Escreva um programa que recebe dois n�meros do usu�rio e informa se o segundo � divisor do primeiro.
	int num1, num2;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o primeiro n�mero:\n");
	scanf("%d", &num1);
	
	printf("Digite o segundo n�mero:\n");
	scanf("%d", &num2);
	
	if(num2 == 0){
		printf("N�o � poss�vel dividir por 0");
	}
	else{
		if(num1 % num2 == 0){
			printf("%d � divisor de %d", num2, num1);
		}
	    else{
			printf("%d n�o � divisor de %d", num2, num1);
		}
	}
}
