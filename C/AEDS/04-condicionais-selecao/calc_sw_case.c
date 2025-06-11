#include <locale.h>
#include <stdio.h>

int main() {

  setlocale(LC_ALL, "Portuguese"); // Habilita a acentuação para o Português
  // setlocale(LC_ALL, "C");

  int Sel, Num1, Num2;
  int Result;

  printf("\n>>>>>>>> CALCULADORA <<<<<<<<<\n");
  printf("Menu de Operações\n");
  printf(
      " 1 - SOMA\n 2 - SUBTRAÇÃO\n 3 - MULTIPLICAÇÃO\n 4 - DIVISÃO\n 5 - SAIR");
  printf("\nDigite dois inteiros para serem os operandos:\n");
  scanf("%d%*c*", &Num1);
  scanf("%d%*c", &Num2);
  printf("\nSelecione a operação pelo número correspondente no menu:\n");
  scanf("%d%*c", &Sel); // variável de seleção

  switch (Sel) { // Estrutura de seleção múltipla
  case 1:
    Result = Num1 + Num2;
    printf("O resutado da SOMA é: %d\n", Result);
    break;
  case 2:
    Result = Num1 - Num2;
    printf("O resultado da SUBTRAÇÃO é %d\n", Result);
    break;
  case 3:
    Result = Num1 * Num2;
    printf("O resultado da MULTIPLICAÇÃO é %d\n", Result);
    break;
  case 4:
    Result = Num1 / Num2;
    printf("O resultado da DIVISÃO é %d\n", Result);
    break;
  case 5:
    Result = 0;
    printf("A calculadora será encerrada!\n");
    break;
  default:
    Result = 0;
    printf("Nenhuma operação foi realizada e o resultado é %d\n", Result);
  }

  printf("\nPressione ENTER para continuar...\n");
  getchar();

  return 0;
}
