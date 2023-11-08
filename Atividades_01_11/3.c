#include <stdio.h>
#include <locale.h>

float expoente(float numero){
    if(numero < 0){
        return numero * -1;
    }
    else{
        return numero;
    }
}

int main(){
    float numero, numero_absoluto;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite um número: \n");
    scanf("%f", &numero);
    
    numero_absoluto = expoente(numero);
    
    printf("O valor absoluto de %.2f é: %.2f", numero, numero_absoluto);
}
