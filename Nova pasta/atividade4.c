#include <stdio.h>
#include <locale.h>

int main(){
	/* Escreva um programa que o usu�rio escolhe uma op��o entre 2 (calcular sal�rio l�quido ou calcular sal�rio bruto), 
	ent�o recebe o valor que o funcion�rio recebe por hora trabalhada e ap�s recebe a quantidade de horas trabalhadas no m�s*/
	float valor_hora;
	int horas_trabalhadas, opcao;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Escolha 1 para sal�rio bruto ou 2 para sal�rio l�quido:\n");
	scanf("%d", &opcao);
	
	printf("Insira o valor hora:\n");
	scanf("%f", &opcao);
	
	printf("Insira as horas trabalhadas no m�s:\n");
	scanf("%d", &opcao);
	
}
