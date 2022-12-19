#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int numberOfSize;
    scanf("%i", &numberOfSize);


    int array[numberOfSize];

    for (int i = 0; i < numberOfSize * 2 ; i++){ 
        if((i<numberOfSize)){
            scanf("%i", &array[i]);
        }else{
            printf("%i ", array[i-numberOfSize]);
        }
        
    }
}