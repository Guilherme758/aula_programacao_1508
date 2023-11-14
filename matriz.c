#include<stdio.h>
#include<string.h>
#include<locale.h> 
// Criar um programa que armazene uma lista de nomes
// e calcule a quantidade media de caracteres nos nomes

void addNome(char nomes[30][30]){
	char nome[30];
	int opcao, index;
	
	do{
        printf("Escolha uma opção:\n");
        printf("1. Cadastrar novo nome\n");
        printf("2. Sair\n");
        scanf(" %d", &opcao);
        while(getchar() != '\n');
    
        if(opcao != 2){
            printf("Digite um novo nome:\n");
            gets(nome);

            int i = 0;

            while(nomes[i][0] != '\0' && i < 30){
                i++;
            }

            for(index = 0; index < 30; index++){
                nomes[i][index] = nome[index];
            }
        }
    }while(opcao != 2);
}

float mediaNome(char nomes[30][30]){
	float countMedia = 0;
    int quantidade = 0, i;
    
    for(i = 0; i < 30; i++){
        printf("%s\n", nomes[i]);
        if(nomes[i][0] != '\0'){
            countMedia += strlen(nomes[i]);
            quantidade++;
        }
    }
    
    return countMedia/quantidade;
}

// Criar uma função addNome(matriz) => ler do usuário um nome e add na matriz
// Criar uma função para calcular o tamanho medio das strings, return media.

int main(){
    char nomes[30][30];
    int opcao, i;
    float resultado;

	setlocale(LC_ALL, "Portuguese");
	
    // Preenche todas as posições da primeira coluna 
    for(i = 0; i < 30; i++){
        nomes[i][0] = '\0';
    }

	addNome(nomes);

    resultado = mediaNome(nomes);

    printf("Media: %.2f", resultado);
}
