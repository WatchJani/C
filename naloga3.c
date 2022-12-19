#include <stdio.h>
#include <stdbool.h>


void Reverse(int array[], int size){
    for(int i = size-1; i >= 0; i--){
       printf("%i \n",array[i]);
    }
}

int main(){

    int size;
    scanf("%i", &size);

    int array[size];


    for (int i = 0; i < size; i++){
        scanf("%i", &array[i]);
    }

    Reverse(array ,size);
}