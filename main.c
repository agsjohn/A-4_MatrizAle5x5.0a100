#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 5
#define M 101

main(){
  int l, c, m[T][T], cont, mod, cal, cont2;
  srand(time(NULL));
  for(l = 0; l < T; l++){
    for(c = 0; c < T; c++){
      m[l][c] = rand() % M;
    }
  }
  printf("Matriz: \n");
  for(l = 0; l < T; l++){
    for(c = 0; c < T; c++){
      if(c == T - 1){
        printf("%i\n", m[l][c]);
      }
      else{
        printf("%i - ", m[l][c]);
      }
    }
  }
  printf("\nNúmeros pares: ");
  cont = 0;
  for(l = 0; l < T; l++){
    for(c = 0; c < T; c++){
      if(m[l][c] % 2 == 0){
        if(cont == 0){
          printf("%i", m[l][c]);
          cont++;
        }
        else{
          printf(" - %i", m[l][c]);
        }
      }
    }
  }
  printf("\nNúmeros ímpares: ");
  cont = 0;
  for(l = 0; l < T; l++){
    for(c = 0; c < T; c++){
      if(m[l][c] % 2 != 0){
        if(cont == 0){
          printf("%i", m[l][c]);
          cont++;
        }
        else{
          printf(" - %i", m[l][c]);
        }
      }
    }
  }
  printf("\nNúmeros primos: ");
  cont2 = 0;
  for(l = 0; l < T; l++){
    for(c = 0; c < T; c++){
      mod = 0;
      for(cont = 1; cont <= m[l][c]; cont++){
        cal = m[l][c] % cont;
        if(cal == 0){
          mod++;
        }
      }
      if(mod == 2){
        if(cont2 == 0){
          printf("%i", m[l][c]);
          cont2++;
        }
        else{
          printf(" - %i", m[l][c]);
        }
      }
    }
  }
  getchar();
}