#include <stdio.h>
#include <locale.h>
#include <math.h>

float calculaDistancia(float xa, float ya, float xb, float yb){
    return sqrt(pow(xb-xa, 2) + pow(yb-ya, 2));
}

int main()
{
    float xa, ya, xb, yb, resultado;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite x da coordenada A: \n");
    scanf("%f", &xa);
    
    printf("Digite y da coordenada A: \n");
    scanf("%f", &ya);
    
    printf("Digite x da coordenada B: \n");
    scanf("%f", &xb);
    
    printf("Digite y da coordenada B: \n");
    scanf("%f", &yb);
    
    resultado = calculaDistancia(xa, ya, xb, yb);
    
    printf("A distância entre o ponto A (%.2f, %.2f) e o ponto B (%.2f, %.2f) é de: %.2f", xa, ya, xb, yb, resultado);
}
