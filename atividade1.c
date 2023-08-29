#include <stdio.h>
#include <locale.h>

int main(){
	
	// Leia a quantidade de segundos e imprima: Horas, minutos, segundos
	int segundos_usuario;
	int horas_output, minutos_output, segundos_output;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a quantidade de segundos:\n");
	scanf("%d", &segundos_usuario);
	
	horas_output    = segundos_usuario / 3600;
	minutos_output  = segundos_usuario % 3600 / 60;
	segundos_output = segundos_usuario % 60;
	
	printf("Horas: %d\n", horas_output);
	printf("Minutos: %d\n", minutos_output);
	printf("Segundos: %d\n", segundos_output);
}
