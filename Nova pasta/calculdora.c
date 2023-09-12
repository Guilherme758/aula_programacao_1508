#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	float resultado;
	char operacao;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &num1);
	
	printf("Digite o segundo valor: \n");
	scanf("%d", &num2);
	
	printf("Digite a opera��o que ser� executada\n");
	scanf("%c", &operacao);
	
	switch (operacao){
		case '+':
			resultado = num1 + num2;
			printf("O resultado da soma �: %f", resultado);
			break;
		case '-':
			resultado = num1 - num2;
			printf("O resultado da subtra��o �: %f", resultado);
			break;
		case '*':
			resultado = num1 * num2;
			printf("O resultado da multiplica��o �: %f", resultado);
			break;
		case '/':
			if(num2 == 0){
				printf("N�o � poss�vel divis�o por 0");
			}
			else{
				resultado = num1 / num2;
				printf("O resultado da divis�o �: %f", resultado);
			}
			break;
		case '$':
			resultado = pow(num1, num2);
			printf("O resultado da exponencia��o �: %d", resultado);
			break;
		case '@':
			resultado = sqrt(num1)
			printf("O resultado da raiz �: %d", resultado);
			break;
		default:
			printf("Op��o inv�lida");
	}
	
}
