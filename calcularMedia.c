#include <stdio.h>
#include <locale.h>

int main(){
	int idade = 40;
	int ano_nascimento = 1981;
	float salario = 1320.45;
	char letra = 'a';
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("A pessoa tem %d anos.\n", idade);
	printf("A pessoa tem %d anos.\n", idade++); // Usou a vari�vel primeiro e depois somou
	printf("A pessoa tem %d anos.\n", idade);
	printf("A pessoa tem %d anos.\n", ++idade); // Somou a vari�vel e usou
	printf("A pessoa tem %d anos. E nasceu em %d\n", idade, ano_nascimento);

	printf("O sal�rio da pessoa � %.2f\n", salario);	
	
	printf("A letra � %c\n", letra);
	
	//printf(&salario); // & Faz refer�ncia ao endere�o de mem�ria da vari�vel salario
	
	printf("Digite seu sal�rio:\n");
	scanf("%f", &salario);           // Espera um comando do usu�rio e insere o dado recebido na vari�vel sal�rio
	
	printf("Novo sal�rio: %.2f\n", salario);
	
	printf("Digite uma letra:\n");
	
	fflush(stdin); //Limpa o buffer para poder scanear a vari�vel char
	scanf("%c", &letra);
	printf("A letra � %c", letra);
	
	printf("Digite uma letra:\n");
	letra = getchar();
	printf("A letra � %c", letra);
	
	
}
