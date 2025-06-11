#include <stdio.h>

int main() {

  int num;
  printf("\nDigite um número inteiro: ");
  scanf("%d", &num);

  if (num % 3 == 0) {
    printf("O número %d É multiplo de 3\n", num);
  } else {
    printf("O número %d NÃO é multiplo de 3\n", num);
  }
  return 0;
}
