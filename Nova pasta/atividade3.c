#include <stdio.h>
#include <locale.h>

int main(){
	//Escreva um programa que recebe do usu�rio um n�mero float que representa o sal�rio de uma pessoa e informe a faixa do imposto de renda que ela se enquadra.
	float salario, aliquota;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite seu sal�rio:\n");
	scanf("%f", &salario);
	
	printf("%f\n", salario);
	
	if(salario <= 2112.00){
		aliquota   = 0.0;
		
		printf("Sua faixa salarial � at� R$ 2112,00 e a al�quota �: %f%%", aliquota * 100);		
	}
	else if(salario >= 2112.01 && salario <= 2826.65){
		aliquota   = 0.075;
		
		printf("Sua faixa salarial � R$ 2112,01 at� R$ 2826,65 e a al�quota �: %f%%", aliquota * 100);		
	}
	else if(salario >= 2826.66 && salario <= 3751.05){
		aliquota   = 0.15;
		
		printf("Sua faixa salarial � R$ 2826,66 at� 3751,05 e a al�quota �: %f%%", aliquota * 100);		
	}
	else if(salario >= 3751.06 && salario <= 4664.68){
		aliquota   = 0.225;
		
		printf("Sua faixa salarial � R$ 3751,06 at� R$ 4664,68 e a al�quota �: %f%%", aliquota * 100);		
	}
	else{
		aliquota = 0.275;
		
		printf("Sua faixa salarial � superior a R$ 4664,68 e a al�quota �: %f%%", aliquota * 100);	
	}
}
