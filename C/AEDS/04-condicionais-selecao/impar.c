#include <stdio.h>

int main() {

  int num;
  printf("Digite um número inteiro: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("o número é par. \n");
  } else {
    printf("o número é impar. \n");
  }
  return 0;
}
