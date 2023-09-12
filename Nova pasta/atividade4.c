#include <stdio.h>
#include <locale.h>
//TODO: Incluir dedução do imposto de renda. (Salário * aliquota) - dedução

int main(){
	/* Escreva um programa que o usuário escolhe uma opção entre 2 (calcular salário líquido ou calcular salário bruto), 
	então recebe o valor que o funcionário recebe por hora trabalhada e após recebe a quantidade de horas trabalhadas no mês*/
	float valor_hora, salario_bruto, salario_liquido, aliquota_ir, aliquota_inss, desconto_ir, desconto_inss;
	int horas_trabalhadas, opcao;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o valor hora:\n");
	scanf("%f", &valor_hora);
	
	printf("Insira as horas trabalhadas no mês:\n");
	scanf("%d", &horas_trabalhadas);
	
	salario_bruto = horas_trabalhadas * valor_hora;
	
	printf("Escolha 1 para salário bruto ou 2 para salário líquido:\n");
	scanf("%d", &opcao);
	
	if(opcao == 1){
	    printf("O salário bruto é %.2f", salario_bruto);
	}
	else if(opcao == 2){
	    if(salario_bruto <= 2112.00){
		    aliquota_ir = 0.0;
	    }
	    else if(salario_bruto >= 2112.01 && salario_bruto <= 2826.65){
		    aliquota_ir = 0.075;
	    }
    	else if(salario_bruto >= 2826.66 && salario_bruto <= 3751.05){
    		aliquota_ir = 0.15;
    	}
    	else if(salario_bruto >= 3751.06 && salario_bruto <= 4664.68){
    		aliquota_ir = 0.225;
    	}
    	else{
    		aliquota_ir = 0.275;
    	}
    	
    	if(salario_bruto <= 1320){
    	    aliquota_inss = 0.075;
    	}
    	else if(salario_bruto >= 1320.01 && salario_bruto <= 2571.29){
    	    aliquota_inss = 0.09;
    	}
    	else if(salario_bruto >= 2571.30 && salario_bruto <= 3856.94){
    	    aliquota_inss = 0.12;
    	}
    	else if(salario_bruto >= 3856.95 && salario_bruto <= 7507.49){
    	    aliquota_inss = 0.14;
    	}
    	else{
    	    aliquota_inss = 0;
    	}
    	
    	desconto_ir   = salario_bruto * aliquota_ir;
    	desconto_inss = salario_bruto * aliquota_inss;
    	
    	salario_liquido = salario_bruto - desconto_ir - desconto_inss;
    	
    	printf("Seu salário líquido é de %.2f", salario_liquido);
	}
	else{
	    printf("Opção inválida");
	}
}
