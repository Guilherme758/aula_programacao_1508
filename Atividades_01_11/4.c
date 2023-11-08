#include <stdio.h>
#include <locale.h>
#include <math.h>

int numeroPar(float numero){
    if(fmod(numero, 2) == 0){ // N�meros decimais n�o podem ser classificados como par ou impar
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
    
    printf("Digite um n�mero: \n");
    scanf("%f", &numero);
    
    is_par = numeroPar(numero);
    
    if(is_par == 1){
        printf("%f � um n�mero par", numero);
    }
    else{
        printf("%f n�o � um n�mero par", numero);
    }
}
