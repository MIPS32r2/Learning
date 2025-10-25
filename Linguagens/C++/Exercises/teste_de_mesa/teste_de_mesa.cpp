#include <iostream>
using namespace std;

int num,soma,cont;

int main(){

  soma=0;
  cont=0;

  while(cont<5){
    cout << "Digite um número: ";
    cin >> num;
    soma++;
    cont++;
  }
  cout << "Soma : " << soma << "\n";

  return 0;
}
