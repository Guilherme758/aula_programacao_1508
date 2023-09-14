#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num_usuario, num_random;
	
	srand(time(0)%10);
	
	num_random = rand();
	
	printf("Digite um número: \n");
	scanf("%d", &num_usuario);
	
	if(num_usuario == num_random){
		printf("Você acertou o número!!! (%d)", num_random);
	}
	else{
		if(num_usuario < num_random){
			printf("O número (%d) é menor que o número aleatório\n", num_usuario);
		}
		else{
			printf("O número (%d) é maior que o número aleatório\n", num_usuario);
		}
		
		printf("Digite um número: \n");
		scanf("%d", &num_usuario);
		
		if(num_usuario == num_random){
		printf("Você acertou o número!!! (%d)", num_random);
		}
		else{
			if(num_usuario < num_random){
				printf("O número (%d) é menor que o número aleatório\n", num_usuario);
			}
			else{
				printf("O número (%d) é maior que o número aleatório\n", num_usuario);
			}
		
			printf("Digite um número: \n");
			scanf("%d", &num_usuario);
			
			if(num_usuario == num_random){
				printf("Você acertou o número!!! (%d)", num_random);
			}
			else{
				printf("Tentativas esgotadas, o número aleatório é %d", num_random);
			}	
		}
	}
}
