#include <stdio.h>
#include <stdbool.h>



int main(){
  
    int newArray[] = {1,23,4};
    int duzina = sizeof(newArray);
    int element = sizeof(newArray[0]);

    printf("%i\n", duzina/element);
}