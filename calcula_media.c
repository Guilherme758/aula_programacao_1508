#include <stdio.h>
#include <locale.h>

int main(){
	// 2. Solicite dois números e calcule a média
	int num1, num2;
	float media;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o primeiro número: \n");
	scanf("%d", &num1);
	
	printf("Digite o segundo número: \n");
	scanf("%d", &num2);
	
	media = (num1 + num2)/2.0;
	
	printf("A média é: %f", media);
	
}
