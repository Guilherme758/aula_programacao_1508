#include <stdio.h>
#include <locale.h>

int defineTriangulo(float lados[]){
    if(lados[0] == lados[1] && lados[0] == lados[2]){ // Triângulo equilátero
        return 1;
    }
    else if((lados[0] == lados[1] || lados[0] == lados[2]) || (lados[1] == lados[0] || lados[1] == lados[2])){ // Triângulo Isósceles
        return 0;
    }
    else{ // Triângulo Escaleno
        return -1;
    }
}

int main()
{
    int i, resultado;
    float lados[3];
    
    setlocale(LC_ALL, "Portuguese");
    
    for(i = 0; i < 3; i++){
        printf("Digite o %dº lado do triângulo: \n", i+1);
        scanf("%f", &lados[i]);
    }
    
    resultado = defineTriangulo(lados);
    
    if(resultado == 1){
        printf("Triângulo equilátero");
    }
    else if(resultado == 0){
        printf("Triângulo Isósceles");
    }
    else{
        printf("Triângulo escaleno");
    }
    
}
