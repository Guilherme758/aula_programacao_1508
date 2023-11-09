#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int sorteiaFace(){
    int faces[6] = {0, 0, 0, 0, 0, 0};
    int i, j;
    
    for(i = 0; i < 1000000; i++){
        faces[rand() % 6] += 1;
    }
        
    printf("Quantidade de sorteios 1000000: \n");
    
	for(j = 0; j < 6; j++){
		printf("Face %d: %d \n", j, faces[j]);
	}
    
	return 1;
}

int main(){    
    setlocale(LC_ALL, "Portuguese");
    
    srand(time(NULL));
    
    sorteiaFace();
}
