#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num_usuario, num_random;
	
	srand(time(0)%10);
	
	num_random = rand();
	
	printf("Digite um n�mero: \n");
	scanf("%d", &num_usuario);
	
	if(num_usuario == num_random){
		printf("Voc� acertou o n�mero!!! (%d)", num_random);
	}
	else{
		if(num_usuario < num_random){
			printf("O n�mero (%d) � menor que o n�mero aleat�rio\n", num_usuario);
		}
		else{
			printf("O n�mero (%d) � maior que o n�mero aleat�rio\n", num_usuario);
		}
		
		printf("Digite um n�mero: \n");
		scanf("%d", &num_usuario);
		
		if(num_usuario == num_random){
		printf("Voc� acertou o n�mero!!! (%d)", num_random);
		}
		else{
			if(num_usuario < num_random){
				printf("O n�mero (%d) � menor que o n�mero aleat�rio\n", num_usuario);
			}
			else{
				printf("O n�mero (%d) � maior que o n�mero aleat�rio\n", num_usuario);
			}
		
			printf("Digite um n�mero: \n");
			scanf("%d", &num_usuario);
			
			if(num_usuario == num_random){
				printf("Voc� acertou o n�mero!!! (%d)", num_random);
			}
			else{
				printf("Tentativas esgotadas, o n�mero aleat�rio � %d", num_random);
			}	
		}
	}
}
