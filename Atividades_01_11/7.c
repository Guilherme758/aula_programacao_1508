#include <stdio.h>
#include <locale.h>

float converterTemperatura(float temperatura, char metrica){
    float resultado;
    
    if(metrica == 'c' || metrica == 'C'){         // Celsius para Fahenreit
        resultado = (9 * temperatura + 160) / 5;
    }
    else if(metrica == 'f' || metrica == 'F'){   // Fahenreit para Celsius
        resultado = (5 * temperatura - 160) / 9; 
    }
    
    return resultado;
}

int main()
{
    float temperatura, resultado;
    char metrica;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite a métrica: \n");
    scanf("%c", &metrica);
    
    printf("Digite e temperatura atual: \n");
    scanf("%f", &temperatura);
    
    resultado = converterTemperatura(temperatura, metrica);
    
    if(metrica == 'c' || metrica == 'C'){
        printf("A temperatura em Fahenreit é: %f °F\n", resultado);
    }
    else if(metrica == 'f' || metrica == 'F'){
        printf("A temperatura em Celsius é: %f °C\n", resultado);
    }
    else{
        printf("Métrica inválida");
    }
    
}
