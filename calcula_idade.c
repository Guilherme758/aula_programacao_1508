#include <stdio.h>
#include <locale.h>

int main(){
	// 1. Solicite o ano de nascimento e calcule a idade
	int ano_nascimento, idade;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite seu ano de nascimento: \n");
	scanf("%d", &ano_nascimento);
	
	idade = 2023 - ano_nascimento;
	
	printf("Sua idade é: %d", idade);
}
