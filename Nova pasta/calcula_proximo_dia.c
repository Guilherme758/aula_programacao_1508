#include <stdio.h>
#include <locale.h>

int main(){
	// Faça um programa que receba o dia, mês e ano e calcule o próximo dia
	int dia, mes, ano;
	int dia_output, mes_output, ano_output;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o dia:\n");
	scanf("%d", &dia);
	
	printf("Digite o mês:\n");
	scanf("%d", &mes);
	
	//Valida se o mês é válido
	if(mes <= 0 || mes > 12){
		printf("O mês inserido é inválido");
		return 0;
	}
	
	printf("Digite o ano:\n");
	scanf("%d", &ano);
	
	//Valida se o ano é válido
	if(ano < 0){
		printf("O ano inserido é menor que 0");
		return 0;
	}
	
	if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
		//Valida se o dia está no intervalo de 31 dias
		if(dia <= 0 || dia > 31){
			printf("O dia inserido é inválido");
			return 0;
		}
		
		if(dia == 31){
			if(mes == 12){
				dia_output = 1;
				mes_output = 1;
				ano_output = ano + 1;
				printf("O próximo dia é %d/%d/%d", dia_output, mes_output, ano_output);
			}
			else{
				dia_output = 1;
				mes_output = mes + 1;
				ano_output = ano;
				printf("O próximo dia é %d/%d/%d", dia_output, mes_output, ano_output);
			}
		}
		else{
			dia_output = dia + 1;
			mes_output = mes;
			ano_output = ano;
			printf("O próximo dia é %d/%d/%d", dia_output, mes_output, ano_output);
		}
	}
	else if(mes == 4 || mes == 6 || mes == 7 || mes == 11){
		//Valida se o dia está no intervalo de 30 dias
		if(dia <= 0 || dia > 30){
			printf("O dia inserido é inválido");
			return 0;
		}
		
		if(dia == 30){
			dia_output = 1;
			mes_output = mes + 1;
			ano_output = ano;
			printf("O próximo dia é %d/%d/%d", dia_output, mes_output, ano_output);
		}
		else{
			dia_output = dia + 1;
			mes_output = mes;
			ano_output = ano;
			printf("O próximo dia é %d/%d/%d", dia_output, mes_output, ano_output);
		}
	}
	else{
		if(ano % 4 == 0){
			//Valida se o dia está no intervalo de 29 dias do ano bissexto
			if(dia <= 0 || dia > 29){
				printf("O dia inserido é inválido");
				return 0;
			}
			
			if(dia == 29){
				dia_output = 1;
				mes_output = mes + 1;
				ano_output = ano;
				printf("O próximo dia é %d/%d/%d", dia_output, mes_output, ano_output);
			}
			else{
				dia_output = dia + 1;
				mes_output = mes;
				ano_output = ano;
				printf("O próximo dia é %d/%d/%d", dia_output, mes_output, ano_output);
			}
		}
		else{
			//Valida se o dia está no intervalo de 29 dias do ano bissexto
			if(dia <= 0 || dia > 28){
				printf("O dia inserido é inválido");
				return 0;
			}
			
			if(dia == 28){
				dia_output = 1;
				mes_output = mes + 1;
				ano_output = ano;
				printf("O próximo dia é %d/%d/%d", dia_output, mes_output, ano_output);
			}
			else{
				dia_output = dia + 1;
				mes_output = mes;
				ano_output = ano;
				printf("O próximo dia é %d/%d/%d", dia_output, mes_output, ano_output);
			}
		}
	}
}
