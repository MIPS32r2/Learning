//Estrutura de repetição contada
#include <stdio.h>

int main(){

  int num, result;

  for (int i = 0; i <= 5; i++){
    printf("\nO valor de i é: %d" ,i);
  }

  printf("\nVamos imprimir a taboada do numero __ ?: \n");
  scanf("%d%*c",&num);

  for (int i = 0; i <= 9; i++){
    result=num*i;
  printf("%d*%d = %d\n",num,i,result);
  }

  printf("\nFim do código!\n");
  return 0;
}
