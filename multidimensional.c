#include <stdio.h>
#include <stdbool.h>

void print_points(int points[][2], int len){
    for (int i = 0; i < len; i++ ){
        printf("%i (%i, %i) \n", i + 1, points[i][0], points[i][1]);
    }
}

int main(){
    int points[3][2] = {{1,1}, {3,5}, {3,2}};
    int size = sizeof(points) / sizeof(points[0]);
    print_points(points, size);
}