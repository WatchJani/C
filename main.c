#include <stdio.h>
#include <stdbool.h>


int main(){

  char crka = 'a';

  if (crka >= 'A' && crka <= 'Z'){
      printf("%c -> %c\n", crka ,crka+32);
  }else{
      printf("%c -> %c\n", crka , crka-32);
  }

}