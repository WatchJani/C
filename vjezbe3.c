#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int polmer;
    printf("Vapiši število: ");
    scanf("%i", &polmer);

    for (int i = 1; i<polmer; i+=2){
        printf("%i ", i);
    }
}