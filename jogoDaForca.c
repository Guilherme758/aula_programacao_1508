#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	int tentativas = 10, indexLetrasDigitadas = 0, novaLetra, cont;
	int posicoesLetras[100];
	char palavra[100], letrasDigitadas[100];
	char letra;
	
	setlocale(LC_ALL, "Portuguese");
		
	printf("Digite a palavra a ser advinhada: \n");
	gets(palavra);
	
	char forca[strlen(palavra) + 1];
	
	for(cont = 0; cont < strlen(palavra); cont++){
		forca[cont] = '_';
	}
		
	forca[strlen(palavra)] = '\0';
		
	while(tentativas > 0){
		if(strchr(forca, '_') == NULL){
			printf("O jogo foi finalizado!\n");
			printf("Letras digitadas %s", letrasDigitadas);
			break;
		}
		
		novaLetra = 0;
		
		do{
			printf("Digite uma letra: \n");
			fflush(stdin);
			scanf("%c", &letra);
			
			if(strchr(letrasDigitadas, letra) == NULL){
				letrasDigitadas[indexLetrasDigitadas] = letra;
				indexLetrasDigitadas++;
				novaLetra = 1;
			}
			else{
				printf("Letra já digitada. Tente novamente. \n");
			}
		}while(novaLetra == 0);
						
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
//			for(cont = 0; cont < 100; cont++){
//				if(cont == indexPosicoesLetras){
//					break;
//				}
//				else{
//					forca[posicoesLetras[cont]] = letra;
//				}
//			}
		printf("%s\n", forca);
		}
	}
}


