#include <stdio.h>
#include <locale.h>
#include <math.h>

float delta(float a, float b, float c){
    return pow(b, 2) - 4 * a * c;  
}

int main(){
    float a, b, c, valor_delta;

    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o valor de a: \n");
    scanf("%f", &a);
    
    printf("Digite o valor de b: \n");
    scanf("%f", &b);
    
    printf("Digite o valor de c: \n");
    scanf("%f", &c);
    
    valor_delta = delta(a, b, c);
    
    printf("O valor de delta é: %f", valor_delta);
    
}
