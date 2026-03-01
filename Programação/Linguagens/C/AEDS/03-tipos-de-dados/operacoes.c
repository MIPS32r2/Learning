#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int Num1, Num2;
  int Soma, Subratacao, Multiplicacao, Divisao;
  int Resto, Absoluto, Truncado, ArredondaCima, ArredondaBaixo;
  int LogNOT, LogAND, LogOR, LogXOR, LogShiftLeft, LogShiftRight;

  float fNum1, fNum2;
  double dNum1, dNum2;
  float fSoma, fSubtracao, fMultiplicacao, fDivisao;
  int iResto, iAbsoluto, iTruncado;
  int iArredondaCima, iArredondaBaixo;
  float fLogNOT, fLogAND, fLogOR, fLogXOR;

  printf("\nDigite o primeiro número INTEIRO: ");
  scanf("%d%*c",&Num1);

  printf("Digite o segundo número INTEIRO: ");
  scanf("%d%*c",&Num2);

  Soma = Num1 + Num2;
  Subratacao = Num1 - Num2;
  Multiplicacao = Num1 * Num2;
  Divisao = Num1 / Num2;
  Resto = Num1 % Num2;
  Absoluto = abs(Num1);
  Truncado = trunc(Num1);
  ArredondaCima = ceil(Num1);
  ArredondaBaixo = floor(Num1);
  LogAND = Num1 & Num2;
  LogOR = Num1 | Num2;
  LogXOR = Num1 ^ Num2;
  LogNOT = (~Num1);
  LogShiftLeft = (Num1<<1);
  LogShiftRight = (Num1>>1);

  printf("\n> Operações ARITIMÉTICAS BÁSIAS com os INTEIROS %d e %d: \n", Num1,Num2);
  printf("Soma: %d\n", Soma);
  printf("Subtração: %d\n",Subratacao);
  printf(" Multiplicação: %d\n",Multiplicacao);
  printf("Divisão: %d\n",Divisao);

  printf("\n> Operações ARITIMÉTICAS ADICIONAIS com os inteiros %d e %d: \n",Num1,Num2);
  printf("Resto: %d\n",Resto);
  printf("Absoluto de %d: %d\n",Num1,Absoluto);
  printf("Arredondado para cima de %d: %d\n",Num1,ArredondaCima);
  printf("Arredonda para baixo de %d: %d\n",Num1,ArredondaBaixo);

  printf("\n> Operações LÓGICAS com os INTEIROS %d e %d\n",Num1,Num2);
  printf("AND: %d\n",LogAND);
  printf(" OR: %d\n",LogOR);
  printf("XOR: %d\n", LogXOR);
  printf("NOT (%d): %d\n",Num1,LogNOT);
  printf("Deslocamento a esquerda (%d): %d\n",Num1,LogShiftLeft);
  printf("Deslocamento a direita (%d): %d\n",Num1,LogShiftRight);

  printf("\nDigite o primeiro DECIMAL: ");
  scanf("%f%*c",&fNum1);

  printf("Digite o segundo número DECIMAL: ");
  scanf("%f%*c",&fNum2);

  fSoma = fNum1 + fNum2;
  fSubtracao = fNum1 - fNum2;
  fMultiplicacao = fNum1 * fNum2;
  fDivisao = fNum2 / fNum2;
  //fResto = fNum1 % fNum2; operacao para inteiros
  iAbsoluto = abs(fNum1);
  iTruncado = (int)fNum1;

  dNum1 = fNum1;
  dNum2 = fNum2;

  //estas operacoes tem operando double e podem ser atribuidas a double ou a int comom retorno
  // no codigo deixei o operando double e o retono int

  iArredondaCima = ceil(dNum1); //atribuir a double
  iArredondaBaixo = floor(dNum1); //atribuir a double

  //int LogNOT, LogAND, LogOR, LogXOR;

  printf("\n> Operações ARITIMÉTICAS BÁSICAS com os DECIMAIS %f e %f\n",fNum1,fNum2);
  printf(" Soma: %f\n",fSoma);
  printf(" Subtração: %f\n", fSubtracao);
  printf(" Subtração: %f\n", fSubtracao);

  //int LogNOT, LogAND, LogOR, LogXOR;

  printf("\n> Operações ARITIMÉTICAS BÁSICAS com os DECIMAIS %f e %f:\n",fNum1,fNum2);
  printf(" Soma: %f\n",fSoma);
  printf("Subtração: %f\n", fSubtracao);
  printf("Multiplicação: %f\n", fMultiplicacao);
  printf("Divisão: %f\n",fDivisao);

  printf("\n> Operações ARITIMÉTICAS ADICIONAIS com os DECIMAIS %f e %f:\n",fNum1,fNum2);
  printf("Resto: operação para números inteiros\n");
  printf("Absoluto de %f: %d\n",fNum1,iAbsoluto);
  printf("Truncado de %f: %d\n",fNum1,iTruncado);
  printf("Arredondado para cima de %lf: %d\n",dNum1,iArredondaCima);
  printf("Arredondado para baixo de %lf: %d\n",dNum1,iArredondaBaixo);
  
  return 0;
}
