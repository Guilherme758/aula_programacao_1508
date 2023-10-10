#include <stdio.h>
#include <locale.h>
#include <math.h>

int escreveLog(char conteudo[], char operacao, int num1, int num2, char log[]){
	FILE *arquivo = fopen("log.txt", "r+");
	fread(conteudo, sizeof(char), 100, arquivo);
	int cont = 0;
	
	for(int i = 0; i < strlen(conteudo); i++){
		if(conteudo[i] == "\\n"){
			cont++;
		}	
	}
	
	printf("%d", cont);
	
//	if (strlen(conteudo) == 0){
//		snprintf(log, 1024*sizeof(char), "1. = %d %c %d\n", num1, operacao, num2);
//	    printf(log);
//	}
//	else{
//		snprintf(log, 1024*sizeof(char), "2. = %d %c %d\n", num1, operacao, num2);
//	    printf(log);
//	}
//	
//	fclose(arquivo);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	float resultado;
	char operacao, conteudo[] = "", log[] = "";
	
//	printf("%s", conteudo);
//	printf("%d", strlen(conteudo));
//	fclose(arquivo);
//	
//	fwrite("OK", sizeof("OK"), 1, arquivo);
//	fclose(arquivo);
	
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
			escreveLog(conteudo, operacao, num1, num2, log);
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
