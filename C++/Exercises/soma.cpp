#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

  int n1,n2,resultado;
  
  system("clear");

  cout << "Digite um número inteiro: ";
  cin >> n1;
  cout <<  "Digite outro número inteiro: ";
  cin >> n2;

  resultado=n1+n2;

  cout << "O Resultado da soma é: " << resultado << "\n";
    
  return 0;
}
