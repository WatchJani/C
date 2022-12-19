#include <stdio.h>
#include <stdbool.h>

// void copyString(char from[], char to[]);
// void concat(char str1[], char str2[]);
// int lenght(char str1[]);

int main(){
    // char firstString[] = "My STRING";
    // char secondString[] = {'B', 'A', 'A', '\0'};


    // for (int i = 0; i < 9;i++){
    //     printf("%c\n", firstString[i]);
    // }

    // int index = 0;
    // while (firstString[index] != '\0'){
    //     printf("%c", firstString[index]);
    //     index++;
    // }
    // printf("\n");
    // printf("%i \n", index);

    // printf("%s \n", firstString);

    //==================================================================00
    // char input[20];
    // printf("Vpisi svoje ime: ");
    // //scanf("%s", input); //ne pise ako stavis razmak, radi po tamplatu
    // fgets(input, sizeof(input), stdin); //doda sam na kraju \n

    // printf("Vupisal si: %s\n", input);

  //==================================================================00

    // char origin[50]="string i want to copy";
    // char destination[50];
    // copyString(origin, destination);
    // printf("Destination string %s\n ",destination);

    // char origin1[50]="string i want to copy";
    // char destination1[50] =" string i want to copy2";

    // concat(origin1, destination1);

    

}

// void copyString(char from[], char to[]){
//    int index = 0;
//    while (from[index] != '\0'){
//        to[index] = from[index];
//        index++;
//    }
//    to[index] = '\0';
// }

// void concat(char str1[], char str2[]){
//     int index = 0;
//     printf("%i \n", index + lenght(str1));
//     while (str2[index] != '\0'){
//         str1[index + lenght(str1)] = str2[index];
//         index++;
//     }
//     str1[index + lenght(str1)] = '\0';
//     printf("%s \n", str1);
// }

// int lenght(char str1[]){
//     int index = 0;
//     int counter = 0;
//     while (str1[index] != '\0'){
//         counter++;
//         index++;
//     }
//     return counter;
// }