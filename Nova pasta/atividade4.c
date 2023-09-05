#include <stdio.h>
#include <locale.h>

int main(){
	/* Escreva um programa que o usuário escolhe uma opção entre 2 (calcular salário líquido ou calcular salário bruto), 
	então recebe o valor que o funcionário recebe por hora trabalhada e após recebe a quantidade de horas trabalhadas no mês*/
	float valor_hora;
	int horas_trabalhadas, opcao;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Escolha 1 para salário bruto ou 2 para salário líquido:\n");
	scanf("%d", &opcao);
	
	printf("Insira o valor hora:\n");
	scanf("%f", &opcao);
	
	printf("Insira as horas trabalhadas no mês:\n");
	scanf("%d", &opcao);
	
}
