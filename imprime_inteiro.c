#include <stdio.h>
#include <locale.h>

int main(){
	// 3. Solicite um n�mero decimal e imprima o valor inteiro
	float num_usuario;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um valor decimal (Utilize . para separar inteiro de decimal): \n");
	scanf("%f", &num_usuario);
	
	printf("O n�mero inteiro � %d", (int)num_usuario);
}
