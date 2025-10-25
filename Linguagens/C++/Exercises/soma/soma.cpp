#include <stdlib.h>
#include <iostream>
#include <limits>

using namespace std;

int main(){

  int n1,n2,resultado;
  

  parte_1:

  system("clear");

  cout << "Digite um número inteiro: ";
  cin >> n1;

  //Verificando a entrada errada
  if(cin.fail()){
    cout << "Valor incorreto, favor inserir um número inteiro" << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignora o restante da linha 
    goto parte_1;
  }

  system("clear");

  parte_2:

  cout <<  "Digite outro número inteiro: ";
  cin >> n2;
  
  if(cin.fail()){
    cout << "Valor incorreto, favor inserir um número inteiro" << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    goto parte_2;
  }
  
  system("clear");

  resultado=n1+n2;

  cout << "\nO Resultado da soma é: " << resultado << "\n";
    
  return 0;
}
