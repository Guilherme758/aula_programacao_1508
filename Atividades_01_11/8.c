#include <stdio.h>
#include <locale.h>

int numeroPerfeito(int numero){
    int fatores[1];
    int fator, soma_fatores = 0;
    
    for(fator = 1; fator < numero; fator++){
        if(numero % fator == 0){
            soma_fatores += fator;
        }
    }
    
    if(soma_fatores == numero && numero != 0){ // O número 0 acaba passando na verificação 
        return 1;
    }
    else{
        return 0;   
    }
}

int main()
{
    int numero, resultado;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite um número: \n");
    scanf("%d", &numero);

    resultado = numeroPerfeito(numero);
    
    if(resultado == 1){
        printf("%d é um número perfeito", numero);
    }
    else{
        printf("%d não é um número perfeito", numero);
    }

    return 0;
}
