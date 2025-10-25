#include <stdio.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL, "Portuguese");

  int num, result;

  printf("\nVamos imprimir a tabuada de 1 até o número __ ?:");
  scanf("%d%*c",&num);
  
  for (int i = 1; i <= num; i++){
    printf("Taboada do número: %d \n",i);
    for (int j = 0; j <= 9; j++) {
      result=i*j;
      printf("%d*%d = %d\n",i,j,result);
    }
  }
 

  return 0;
}
