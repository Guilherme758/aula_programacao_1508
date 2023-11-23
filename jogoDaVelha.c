#include <stdio.h>
#include <locale.h>

void limpaArray(char array[9][3]){
	int cont;
	
	for(cont = 0; cont < 9; cont++){
		array[cont][0] = '\0';
	}
}

int montaTabuleiro(char tabuleiro[3][6], char posicoesJogador[9][3], int jogada, char jogador){
	int linha, coluna, cont;
	
	linha  = posicoesJogador[jogada][0] - 48; // "Convertendo" ASCII para inteiro
	coluna = posicoesJogador[jogada][1] - 48; // "Convertendo" ASCII para inteiro
	coluna = coluna * 2;
	
	if(tabuleiro[linha][coluna] != '_' && tabuleiro[linha][coluna] != ' '){
        return 0;
    }

	tabuleiro[linha][coluna] = jogador;
	
	for(cont = 0; cont < 3; cont++){
		printf("%s\n", tabuleiro[cont]);
	}
	
	return 1;
}

int validaJogada(char tabuleiro[3][6], char jogador){
	int cont;
	
	//Validação Vertical
	for(cont = 0; cont < 3; cont++){ // Nessa validação, as linhas são fixas e as colunas variam
		if(tabuleiro[0][cont * 2] == tabuleiro[1][cont * 2] && tabuleiro[0][cont * 2] == tabuleiro[2][cont * 2]){
			return 1;
		}
	}
	
	//Validação Horizontal
	for(cont = 0; cont < 3; cont++){ // Nessa validação, as linhas variam e as colunas são fixas. Necessário desconsiderar _ e espaço da validação, pois eles podem se repetir 3 vezes Horizontalmente
		if((tabuleiro[cont][0] == tabuleiro[cont][2] && tabuleiro[cont][0] == tabuleiro[cont][4]) && (tabuleiro[cont][0] != '_' && tabuleiro[cont][0] != ' ')){
			return 1;
		}
	}
	
	//Validação Diagonal
	if((tabuleiro[0][0] == tabuleiro[1][2] && tabuleiro[0][0] == tabuleiro[2][4]) || (tabuleiro[0][4] == tabuleiro[1][2] && tabuleiro[0][4] == tabuleiro[2][0])){
		return 1;
	}
	
	return 0;
}

int main(){
	int cont, jogoAcabou = 0, continuar = 0;
	int jogadas, jogadasJogador1 = 0, jogadasJogador2 = 0;
	char posicoesJogador1[9][3], posicoesJogador2[9][3];
	char tabuleiro[3][6] = {"_|_|_\0", "_|_|_\0", " | | \0"};
	
	limpaArray(posicoesJogador1);
	limpaArray(posicoesJogador2);
	
	setlocale(LC_ALL, "Portuguese");

	for(jogadas = 0; jogadas < 9; jogadas++){
		continuar = 0;

		if(jogadas % 2 == 0){
			do{
				printf("Vez do jogador X: \n");
				
				gets(posicoesJogador1[jogadasJogador1]);

				continuar = montaTabuleiro(tabuleiro, posicoesJogador1, jogadasJogador1, 'X');
				
				if(continuar == 0){
					printf("Essa casa já está preenchida, tente novamente\n");
				}
			}while(continuar == 0);

			jogoAcabou = validaJogada(tabuleiro, 'X');
			
			if(jogoAcabou == 1){
				printf("O jogador X ganhou!!\n");
				break;
			}

			if(jogoAcabou == 0 && jogadas == 8){
				printf("Deu velha!!\n");
			}
			
			jogadasJogador1++;
		}
		else{
			do{
				printf("Vez do jogador O: \n");
				
				gets(posicoesJogador2[jogadasJogador2]);
				
				continuar = montaTabuleiro(tabuleiro, posicoesJogador2, jogadasJogador2, 'O');

				if(continuar == 0){
					printf("Essa casa já está preenchida, tente novamente\n");
				}
			}while(continuar == 0);
			
			jogoAcabou = validaJogada(tabuleiro, 'O');
			
			if(jogoAcabou == 1){
				printf("O jogador O ganhou!!\n");
				break;
			}

			if(jogoAcabou == 0 && jogadas == 8){
				printf("Deu velha!!\n");
			}

			jogadasJogador2++;
		}
	}
	
	printf("Jogadas jogador X: \n");
	for(cont = 0; cont < 9; cont++){
		if(posicoesJogador1[cont][0] == '\0'){
			break;
		}
		else{
			printf("%s\n", posicoesJogador1[cont]);
		}
	}
	
	printf("Jogadas jogador O: \n");
	for(cont = 0; cont < 9; cont++){
		if(posicoesJogador2[cont][0] == '\0'){
			break;
		}
		else{
			printf("%s\n", posicoesJogador2[cont]);
		}
	}
}
