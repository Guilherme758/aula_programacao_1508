#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_FRASE 1000

// Não consegui terminar o código

//
//int isPalindromo(char frase[TAMANHO_FRASE]){
//	int i;
//	char frase_aux[TAMANHO_FRASE]= "";
//	char frase_contrario[TAMANHO_FRASE] = "";
//		
//	for(i = 0; i < strlen(frase); i++){
//		if(frase[i] != ' '){
//			frase_aux[i] = tolower(frase[i]);
//		}
//	}
//	
//	printf("%s\n", frase_aux);
//	
//	return 0;
//}

int isPalindromo(char frase[TAMANHO_FRASE]){
	int i, j;
	char frase_contrario[TAMANHO_FRASE];
	
	j = 0;
	
	for(i = strlen(frase)-1; i > 0; i--){
		if(frase[i] != '\0'){
			frase_contrario[j] = frase[i]; 
		}
		j++;
	}
	
	printf("%s\n", frase_contrario);
	
	return 0;
}

int main(){
	char frase[TAMANHO_FRASE];
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma frase: \n");
	gets(frase);
	
	isPalindromo(frase);
}
