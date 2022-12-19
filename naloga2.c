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
   int array[3][2] = {{1,2}, {3,4}, {5,6}};

   for (int i = 0; i < 3*2; i++){
       printf("%i\n", array[i/2][i%2]);
   }
}