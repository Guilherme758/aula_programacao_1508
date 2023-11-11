#include <stdio.h>
#include <locale.h>

int fatorial(int numero){
	int i, soma_fatorial = numero;
	
	for(i = numero; i > 1; i--){
		soma_fatorial *= i-1;
	}
	
	return soma_fatorial;
}

int calculaS(int numero){
    int resultado = 0, i;
    
    for(i = 1; i <= numero; i++){
        resultado += fatorial(i); // Entendi S como a soma de fatoriais a partir de 1 até N, então se N for 1, S será 1 também e não 2 (1 + 1!).  
    }
    
    return resultado;
}

int main()
{
    int numero, resultado;
    
    printf("Digite um número: \n");
    scanf("%d", &numero);
    
    resultado = calculaS(numero);
    
    printf("O resultado de S é: %d", resultado);
}