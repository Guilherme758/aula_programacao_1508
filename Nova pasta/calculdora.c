#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	float resultado;
	char operacao;
	
	printf("Digite a operação que será executada\n");
	scanf("%c", &operacao);
	
	if(operacao == '@'){
		printf("Digite o primeiro valor: \n");
		scanf("%d", &num1);
	}
	else{
		printf("Digite o primeiro valor: \n");
		scanf("%d", &num1);
		
		printf("Digite o segundo valor: \n");
		scanf("%d", &num2);	
	}
	
	switch (operacao){
		case '+':
			resultado = num1 + num2;
			printf("O resultado da soma é: %f", resultado);
			break;
		case '-':
			resultado = num1 - num2;
			printf("O resultado da subtração é: %f", resultado);
			break;
		case '*':
			resultado = num1 * num2;
			printf("O resultado da multiplicação é: %f", resultado);
			break;
		case '/':
			if(num2 == 0){
				printf("Não é possível divisão por 0");
			}
			else{
				resultado = (float)num1 / num2;
				printf("O resultado da divisão é: %f", resultado);
			}
			break;
		case '$':
			resultado = pow(num1, num2);
			printf("O resultado da exponenciação é: %f", resultado);
			break;
		case '@':
			resultado = sqrt(num1);
			printf("O resultado da raiz é: %f", resultado);
			break;
		default:
			printf("Opção inválida");
	}
	
}
