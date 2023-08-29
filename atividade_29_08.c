#include <stdio.h>
#include <locale.h>

int main(){
	// 1. Solicite o ano de nascimento e calcule a idade
	int ano_nascimento, idade;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Calcula idade\n");
	printf("============================================\n");
	
	printf("Digite seu ano de nascimento: \n");
	scanf("%d", &ano_nascimento);
	
	idade = 2023 - ano_nascimento;
	
	printf("Sua idade é: %d\n", idade);
	printf("============================================\n");
	
	// 2. Solicite dois números e calcule a média
	int num1, num2;
	float media;
		
	printf("Calcula média\n");
	printf("============================================\n");
	
	printf("Digite o primeiro número: \n");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: \n");
	scanf("%d", &num2);
	
	media = (num1 + num2)/2.0;
	
	printf("A média é: %f\n", media);
	printf("============================================\n");
	
	// 3. Solicite um número decimal e imprima o valor inteiro
	float num_usuario;
		
	printf("Cast Decimal\n");
	printf("============================================\n");
	
	printf("Digite um valor decimal (Utilize . para separar inteiro de decimal): \n");
	scanf("%f", &num_usuario);
	
	printf("O número inteiro é %d\n", (int)num_usuario);
	printf("============================================");
	
	return 0;
}
