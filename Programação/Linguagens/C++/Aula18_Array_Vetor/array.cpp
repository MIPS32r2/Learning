#include <iostream>

int main(){

  int vetor[5]={10,20,30,40,50};
  int i;

  for(i=0; i<sizeof(vetor)/4; i++){
      std::cout << vetor[i] << "\n";
  }

  return 0;
}
