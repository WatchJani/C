#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void Print(int array[], int size){
    printf("[ ");
    for(int i = 0; i < size; i++){
       printf("%i ",array[i]);
    }
    printf("] \n");
}

void Sort(int numbers[], int len){
    for (int i = 0; i < len-1;i++){
        for (int j = 0; j < len - i -1; j++){
            if(numbers[j] > numbers[j+1]){
                int tmp = numbers[j + 1];
                numbers[ j +1 ] = numbers[j];
                numbers[j] = tmp;
            } 
        }
    }
}

int main(){
    int array_len = 10;
    int numbers[array_len];


    for (int i = 0; i < array_len; i++){
        numbers[i] = rand()%1000;
    }

    Print(numbers, array_len);
    Sort(numbers, array_len);
    Print(numbers, array_len);
}