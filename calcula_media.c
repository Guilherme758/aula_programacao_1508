#include <stdio.h>
#include <locale.h>

int main(){
	// 2. Solicite dois n�meros e calcule a m�dia
	int num1, num2;
	float media;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o primeiro n�mero: \n");
	scanf("%d", &num1);
	
	printf("Digite o segundo n�mero: \n");
	scanf("%d", &num2);
	
	media = (num1 + num2)/2.0;
	
	printf("A m�dia �: %f", media);
	
}
