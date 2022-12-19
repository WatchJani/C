#include <stdio.h>
#include <stdbool.h>


int maxNumber(int array[], int size){
    int max = array[0];
    for(int i = 0; i< size; i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    
    return max;
}

int main(){

    int size;
    scanf("%i", &size);

    int array[size];


    for (int i = 0; i < size; i++){
        scanf("%i", &array[i]);
    }

    printf("%i največje število \n", maxNumber(array ,size));

}