#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

char insereNovaLetra(char letrasDigitadas[100], int indexLetrasDigitadas){
	char letra;
	int novaLetra = 0;
		
	do{
		printf("Digite uma letra: \n");
		fflush(stdin);
		scanf("%c", &letra);
		letra = tolower(letra);
		
		if(strchr(letrasDigitadas, letra) == NULL){
			letrasDigitadas[indexLetrasDigitadas] = letra;
			indexLetrasDigitadas++;
			novaLetra = 1;
		}
		else{
			printf("Letra já digitada. Tente novamente. \n");
		}
	}while(novaLetra == 0);

	return letra;
}

int verificaLetra(char palavra[100], char letra, int tentativas, char forca[strlen(palavra + 1)]){
	int cont;
	
	if(strchr(palavra, letra) == NULL){
		printf("Não existe essa letra: %c\n", letra);
		tentativas--;
		printf("Tentativas restantes %d\n", tentativas);
		printf("%s\n", forca);
	}
	else{			
		for(cont = 0; cont < strlen(palavra); cont++){
			if(palavra[cont] == letra){
				forca[cont] = letra;
			}
		}
	printf("%s\n", forca);
	}

	return tentativas;
}

int main(){
	int continuar = 0;

	setlocale(LC_ALL, "Portuguese");

	printf("Bem-vindo ao jogo da forca, vamos começar!!!\n");
	printf("Ao final de jogo, pressione 1 para jogar novamente\n");

	do{
		int tentativas = 10, indexLetrasDigitadas = 0, cont;
		int posicoesLetras[100];
		char palavra[100], letrasDigitadas[100] = "";
		char letra;
			
		printf("Digite a palavra a ser advinhada: \n");
		fflush(stdin);
		gets(palavra);

		for(cont = 0; cont < strlen(palavra); cont++){
			palavra[cont] = tolower(palavra[cont]);
		}

		char forca[strlen(palavra) + 1];
		
		for(cont = 0; cont < strlen(palavra); cont++){
			forca[cont] = '_';
		}
			
		forca[strlen(palavra)] = '\0';

		printf("%s\n", forca);
			
		while(tentativas > 0){
			if(strchr(forca, '_') == NULL){ // Considerando que o usuário está trabalhando apenas com letras, senão essa validação não deixaria passar o _ como sendo parte do jogo
				printf("O jogo foi finalizado!\n");
				printf("Letras digitadas %s\n", letrasDigitadas);
				break;
			}
			
			letra = insereNovaLetra(letrasDigitadas, indexLetrasDigitadas);
			indexLetrasDigitadas++;

			tentativas = verificaLetra(palavra, letra, tentativas, forca);
		}
		if(tentativas == 0){
			printf("As tentativas acabaram!\n");
			printf("A palavra era: %s\n", palavra);
			printf("Letras digitadas %s\n", letrasDigitadas);
		}

		printf("Deseja continuar jogando?\n");
		fflush(stdin);
		scanf("%d", &continuar);
	}while(continuar == 1);
}


