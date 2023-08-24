#include <stdio.h>
#include <locale.h>

int main(){
	int idade = 40;
	int ano_nascimento = 1981;
	float salario = 1320.45;
	char letra = 'a';
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("A pessoa tem %d anos.\n", idade);
	printf("A pessoa tem %d anos.\n", idade++); // Usou a variável primeiro e depois somou
	printf("A pessoa tem %d anos.\n", idade);
	printf("A pessoa tem %d anos.\n", ++idade); // Somou a variável e usou
	printf("A pessoa tem %d anos. E nasceu em %d\n", idade, ano_nascimento);

	printf("O salário da pessoa é %.2f\n", salario);	
	
	printf("A letra é %c\n", letra);
	
	//printf(&salario); // & Faz referência ao endereço de memória da variável salario
	
	printf("Digite seu salário:\n");
	scanf("%f", &salario);           // Espera um comando do usuário e insere o dado recebido na variável salário
	
	printf("Novo salário: %.2f\n", salario);
	
	printf("Digite uma letra:\n");
	
	fflush(stdin); //Limpa o buffer para poder scanear a variável char
	scanf("%c", &letra);
	printf("A letra é %c", letra);
	
	printf("Digite uma letra:\n");
	letra = getchar();
	printf("A letra é %c", letra);
	
	
}
