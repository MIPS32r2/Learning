#include <stdio.h>

int main() {

  int num;
  printf("\n Digite um número: ");
  scanf("%d", &num);

  if (num > 100) {
    printf("O número %d é MAIOR que 100", num);
  }

  return 0;
}
