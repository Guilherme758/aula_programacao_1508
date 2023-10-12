#include <stdio.h>
#include <locale.h>
#include <math.h>

int escreveLog(char conteudo[], char operacao, int num1, int num2, char log[], int resultado){
	FILE *arquivo = fopen("log.txt", "r+");
	
//	fseek(arquivo, 0, SEEK_END);
//	printf("%d\n", ftell(arquivo));
	
    fread(conteudo, sizeof(char), 1000, arquivo);
//    fgets(conteudo, 100000, arquivo);
	int i, cont = 0;
	
	for(i = 0; i < strlen(conteudo); i++){
		if(conteudo[i] == '.'){
			cont++;
		}	
	}
	
	fclose(arquivo);
	
	fopen("log.txt", "a");
	
//	if (strlen(conteudo) == 0){
//		snprintf(log, 1024*sizeof(char), "1. = %d %c %d\n", num1, operacao, num2);
//	    printf(log);
//	}
//	else{
//		snprintf(log, 1024*sizeof(char), "2. = %d %c %d\n", num1, operacao, num2);
//	    printf(log);
//	}
//	
	if(operacao == 'v'){
		snprintf(log, 1024*sizeof(char), "%d. %c%d = %d\n", cont + 1, operacao, num1, resultado);
		printf(log);
	}
	else{
		snprintf(log, 1024*sizeof(char), "%d. %d %c %d = %d\n", cont + 1, num1, operacao, num2, resultado);
		printf(log);
	}

//	fwrite(log, sizeof(log), 2, arquivo);

    fputs(log, arquivo);
	
	fclose(arquivo);
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
			printf("O resultado da soma é: %f\n", resultado);
			escreveLog(conteudo, operacao, num1, num2, log, resultado);
			break;
		case '-':
			resultado = num1 - num2;
			printf("O resultado da subtração é: %f\n", resultado);
			escreveLog(conteudo, operacao, num1, num2, log, resultado);
			break;
		case '*':
			resultado = num1 * num2;
			printf("O resultado da multiplicação é: %f\n", resultado);
			escreveLog(conteudo, operacao, num1, num2, log, resultado);
			break;
		case '/':
			if(num2 == 0){
				printf("Não é possível divisão por 0");
			}
			else{
				resultado = (float)num1 / num2;
				printf("O resultado da divisão é: %f\n", resultado);
				escreveLog(conteudo, operacao, num1, num2, log, resultado);
			}
			break;
		case '$':
			resultado = pow(num1, num2);
			printf("O resultado da exponenciação é: %f\n", resultado);
			escreveLog(conteudo, '^', num1, num2, log, resultado);
			break;
		case '@':
			resultado = sqrt(num1);
			printf("O resultado da raiz é: %f\n", resultado);
			escreveLog(conteudo, 'v', num1, 0, log, resultado);
			break;
		default:
			printf("Opção inválida");
	}
	
}
