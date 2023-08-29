#include <stdio.h>
#include <locale.h>

int main(){
	// 3. Solicite um número decimal e imprima o valor inteiro
	float num_usuario;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um valor decimal (Utilize . para separar inteiro de decimal): \n");
	scanf("%f", &num_usuario);
	
	printf("O número inteiro é %d", (int)num_usuario);
}
