#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int polmer;
    printf("Vapiši polmer: ");
    scanf("%i", &polmer);

    printf("obseg %f\n", 2 * polmer * 3.14);
    printf("Ploščina: %f\n", polmer * polmer * 3.14);
}