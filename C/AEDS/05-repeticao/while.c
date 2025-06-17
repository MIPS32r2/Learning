#include <stdio.h>
#include <locale.h>

int main(){

  int num, result;
  int i=0;

  setlocale(LC_ALL, "Portuguese");

  printf("\nVamos imprimir a taboada do número __ ?: ");
  scanf("%d%*c",&num);

  printf("A tabuada do número %d é: \n", num);
  while (1 < 10){
    result = num*i;
    printf("%d*%d = %d\n",num,i,result);
    i++;
  }




  return 0;
}
