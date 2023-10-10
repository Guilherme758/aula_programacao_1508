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
	
	printf("Digite a opera��o que ser� executada\n");
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
			printf("O resultado da soma �: %f", resultado);
			escreveLog(conteudo, operacao, num1, num2, log);
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
				resultado = (float)num1 / num2;
				printf("O resultado da divis�o �: %f", resultado);
			}
			break;
		case '$':
			resultado = pow(num1, num2);
			printf("O resultado da exponencia��o �: %f", resultado);
			break;
		case '@':
			resultado = sqrt(num1);
			printf("O resultado da raiz �: %f", resultado);
			break;
		default:
			printf("Op��o inv�lida");
	}
	
}
