#include <locale.h>
#include <stdio.h>

int main() {

  setlocale(LC_ALL, "Portuguese");
  int idade;

  printf("Digite a idade da pessoa: ");
  scanf("%d", &idade);

  if (idade < 12) {
    printf("Essa pessoa é CRIANÇA!");
  } else if (idade >= 12 && idade <= 17) {
    printf("Essa pessoa é ADOLESCENTE!");
  } else if (idade >= 18 && idade <= 59) {
    printf("Essa pessoa é ADULTA!");
  } else {
    printf("Esse pessoa é IDOSA!");
  }
  return 0;
}
