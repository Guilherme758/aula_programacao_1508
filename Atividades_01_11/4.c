#include <stdio.h>
#include <locale.h>
#include <math.h>

int numeroPar(float numero){
    if(fmod(numero, 2) == 0){ // Números decimais não podem ser classificados como par ou impar
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    float numero;
    int is_par;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite um número: \n");
    scanf("%f", &numero);
    
    is_par = numeroPar(numero);
    
    if(is_par == 1){
        printf("%f é um número par", numero);
    }
    else{
        printf("%f não é um número par", numero);
    }
}
