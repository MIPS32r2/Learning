#include <stdio.h>
#include <math.h>

int main(){

  int numero;
  
  printf("Digite um número: ");
  scanf("%d",&numero);

  if (numero == 1 || numero == 3 || numero == 5 || numero == 7 || numero == 9) {
    printf("Este número é primo!");
  }else {
    printf("Este número é par!");
  }

  return 0;
}
