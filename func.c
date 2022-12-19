#include <stdio.h>
#include <stdbool.h>


const float MY_COSTANT = 3.6;

float kmh(float a){
    return MY_COSTANT / a;
}

float mps(float a){
    return MY_COSTANT * a;
}

int main(){
    int option;
    float value;
    printf("option ");
    scanf("%i", &option);
    printf("value ");
    scanf("%f", &value);

    if(option==1){
        printf("%f\n", mps(value));
    }else{
        printf("%f\n", kmh(value));
    }
}



