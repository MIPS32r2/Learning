#include <iostream>
using namespace std;

int main(){

  int n1,x;
 // string res;

  //(expressão) ? valor1; valor2;

  x=5;

  cout << "Digite um valor: ";
  cin >> n1;



  (n1 >= 10) ? x++ : x--;
  //cout << "Digite a segunda nota: ";
 // cin >> n2;


  //nota=n1+n2;

  //>=60==Aprovado
  //<60==Reprovado

  //(nota >= 60) ? res="Aprovado" : res="Reprovado"; retorno da operação fica armazenado em res
  
  //res=(nota >= 60) ? "Aprovado" : "Reprovado"; //indicando aprovado e reprovado como condições de retorno



  cout << "\nNovo valor de X: " << x << "\n";

  return 0;
}
