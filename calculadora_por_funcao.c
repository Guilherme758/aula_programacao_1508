#include <stdio.h>
#include <locale.h>
#include <math.h>

int somar(int num1, int num2){
    return num1 + num2;
}

int subtrair(int num1, int num2){
    return num1 - num2;
}

int multiplicacao(int num1, int num2){
	return num1 * num2;
}

float divisao(int num1, int num2){
	return (float)num1 / num2;
}

float potencia(int num1, int num2){
	return pow((float)num1, num2); // Converter para float por causa de expoente negativo
}

float raiz_quadrada(int num1){
	return sqrt((float)num1);
}

int fatorial(num1){
	int i, soma_fatorial = num1;
	
	for(i = num1; i > 1; i--){
		soma_fatorial *= i-1;
	}
	
	return soma_fatorial;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    printf("Escolha uma opcao: \n");
    printf("1. somar\n");
    printf("2. subtrair\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Potência\n");
    printf("6. Raiz Quadrada\n");
    printf("7. Fatorial\n");

    int opcao;
    int num1, num2;
    float resultado;

    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("Digite o primeiro numero:\n");
            scanf("%d", &num1);

            printf("Digite o segundo numero:\n");
            scanf("%d", &num2);
            resultado = somar(num1,num2);

            printf("Resultado: %f", resultado);
            break;

        case 2:
        	printf("Digite o primeiro numero:\n");
    		scanf("%d", &num1);

    		printf("Digite o segundo numero:\n");
    		scanf("%d", &num2);
            resultado = subtrair(num1, num2);
            
            printf("Resultado: %f", resultado);
            break;
            
        case 3:
        	printf("Digite o primeiro numero:\n");
    		scanf("%d", &num1);

    		printf("Digite o segundo numero:\n");
    		scanf("%d", &num2);
            resultado = multiplicacao(num1, num2);
            
            printf("Resultado: %f", resultado);
            break;
            
        case 4:
        	printf("Digite o primeiro numero:\n");
    		scanf("%d", &num1);

			do{
				printf("Digite o segundo numero:\n");
    			scanf("%d", &num2);
    			
    			if(num2 == 0){
    				printf("Não é possível divisão por zero, tente novamente\n");
				}
			}while(num2 == 0);	
    		
            resultado = divisao(num1, num2);
            
            printf("Resultado: %f", resultado);
            break;
        
        case 5:
        	printf("Digite o primeiro numero:\n");
    		scanf("%d", &num1);

    		printf("Digite o segundo numero:\n");
    		scanf("%d", &num2);
            resultado = potencia(num1, num2);
            
            printf("Resultado: %f", resultado);
            break;
            
        case 6:
        	printf("Digite o primeiro numero:\n");
    		scanf("%d", &num1);

            resultado = raiz_quadrada(num1);
            
            printf("Resultado: %f", resultado);
            break;
        
        case 7:
        	do{
				printf("Digite o primeiro numero:\n");
    			scanf("%d", &num1);
    			
    			if(num1 <= 0){
    				printf("Digite um número inteiro maior que 0\n");
				}
			}while(num1 <= 0);
			
            resultado = fatorial(num1);
            
            printf("Resultado: %f", resultado);
            break;
        
        default:
        	printf("Opção inválida");
    }

}
