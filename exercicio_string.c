#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	char nome[100], primeiro_nome[20] = " ";
	int cont, posicao_espaco;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite seu nome: \n");
	gets(nome);
	
	for(cont = 0; cont < 100; cont++){
		if(nome[cont] == ' '){
			posicao_espaco = cont;
			break;
		}
	}
	
	printf("%s", strcat(primeiro_nome, 'a'));
		
	for(cont = 0; cont < posicao_espaco; cont++){
		strcat(primeiro_nome, nome[cont]);
	}
		
	printf("Seu nome é %s: ", primeiro_nome);
}
