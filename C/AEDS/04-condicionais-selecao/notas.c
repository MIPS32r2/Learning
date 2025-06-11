#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

  float nota1,nota2,nota3,notafinal;
  float media,frequ;
  char nome[100];

  printf("\nBem vindo ao passador de Aluno!\n");
  printf("\nDigite o nome do aluno: ");
  scanf("%s",&nome);
  printf("\nDigite o valor da nota do primeiro Bimestre: ");
  scanf("%f",&nota1);
  printf("\nDigite o valor da segunda nota: ");
  scanf("%f",&nota2);
  printf("\nDigite o valor da terceira nota: ");
  scanf("%f",&nota3);
  printf("\nDigite a porcentagem de frequência do Aluno: ");
  scanf("%f",&frequ);

  notafinal = (nota1 + nota2 + nota3) / 3;

  if (frequ < 75){
    printf("Aluno %s reprovado por baixa frequência!\n", nome);
  }else if (notafinal <  50) {
    printf("Aluno %s reprovado por nota!\n", nome);
  }else if (notafinal >= 50 && notafinal < 70){
    printf("Aluno %s aprovado com média regular!\n", nome);
  }else if(notafinal >= 70 && frequ >= 75){
    printf("Aluno %s aprovado!", nome);
  } 
  return 0;
}
