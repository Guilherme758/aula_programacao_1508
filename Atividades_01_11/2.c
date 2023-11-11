#include <stdio.h>
#include <locale.h>

float potencia(int num, int expoente){
    int i;
    float resultado = 1;
    
    if(expoente > 0){
        for(i = expoente;i > 0; i--){
            resultado *= num;
        }
    }
    else if(expoente == 0){
        return 1;
    }
    else{
        for(i = expoente;i < 0;i++){
            resultado /= num;
        }
    }
}

int main()
{
    int num, expoente;
    float resultado;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite um número: \n");
    scanf("%d", &num);
    
    printf("Digite o expoente: \n");
    scanf("%d", &expoente);
    
    resultado = potencia(num, expoente);
    
    printf("O resultado é: %f", resultado);

    return 0;
}
