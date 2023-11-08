#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int sorteiaFace(){
    int faces[5] = {0, 0, 0, 0, 0};
    int i;
    
    for(i = 0; i < 1000000; i++){
        faces[rand() % 6] += 1;
    }
    
    printf("Quantidade de sorteios 1000000: \n");
    printf("Face 1: %d \n", faces[0]);
    printf("Face 2: %d \n", faces[1]);
    printf("Face 3: %d \n", faces[2]);
    printf("Face 4: %d \n", faces[3]);
    printf("Face 5: %d \n", faces[4]);
    printf("Face 6: %d \n", faces[5]);
    
    return 1;
}

int main(){
    int faces[5];
    
    setlocale(LC_ALL, "Portuguese");
    
    srand(time(NULL));
    
    sorteiaFace();
    
    // printf("Quantidade de sorteios: \n");
    // printf("Face 1: %d \n", faces[0]);
    // printf("Face 2: %d \n", faces[1]);
    // printf("Face 3: %d \n", faces[2]);
    // printf("Face 4: %d \n", faces[3]);
    // printf("Face 5: %d \n", faces[4]);
    // printf("Face 6: %d \n", faces[5]);
    
}
