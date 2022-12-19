#include <stdio.h>
#include <stdbool.h>

void sifra(char beseda[], int key){

    int index = 0;

    while(beseda[index] != '\0'){
        index++;
         beseda[index] += key
    }

    printf("%s \n", beseda);
}

int main(){
    char beseda[] = "asd aasd as dasd";
    int key = 8;
    sifra(beseda, key);
}



