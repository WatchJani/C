#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
 
int main(int argc, char* argv[]){
    // int polmer;
    // printf("Vapiši število: ");
    // scanf("%i", &polmer);
    srand(time(NULL));
 
    int array[10];
    for (int i = 0;i<10; i++){
        array[i] = 10 + rand()%10000;
    }
 
    for (int i = 0;i<10; i++){
        printf("%i ", array[i]);
    }
}