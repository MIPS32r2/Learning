#include <stdio.h>
#include <locale.h>


int main(){

  setlocale(LC_ALL, "Portuguese");

  int Sel, Num1, Num2;
  int Result;

  printf("\n>>>>>>> CALCULADORA <<<<<<<<<<<");
  printf("Menu de Operações: \n");
  printf(" 1 - SOMA\n 2 - SUBTRAÇÃO\n 3 - MULTIPLICAÇÃO\n 4 - DIVISÃO\n");

  printf("\nDigite dois números inteiros para serem os operandos:\n");
  scanf("%d%*c",&Num1);
  scanf("%d%*c"&Num2);

  printf("\nSelecione a operação pelo número correspondende no menu:\n");
  scanf("%d%*c",&Sel);

  if (Sel == 1){
    Result = Num1 + Num2;
    printf("O Resultado da SOMA é: %d\n",Result);
  }
  else if (Sel == 2) {
    Result = Num1 - Num2;
    printf("o Resultado  da SUBTRAÇÃO é: %d\n",Result);
  }
  else if (Sel == 3) {
    Result =  Num1 * Num2;
    printf("o Resultado da MULTIPLICAÇÃO é: %d\n",Result);
  }
  else if (Sel == 4) {
    Resul = Num1 / Num2;
    printf("o Resultado da DIVISÃO é: %d\n");
  }
  else {
    Result = 0
    printf("Nenhuma operação foi realizada e o resultado é %d\n",Result);
  }
  return 0;
}
