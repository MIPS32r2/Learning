#include <iostream>
#include <limits>
using namespace std;

int main(){

  int nota;

inicio:
  cout << "Digite a nota do aluno: ";
  cin >> nota;

  if(cin.fail() || nota <0 ||  nota >10){
    cout << "Por favor digite um número válido" << "\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    goto inicio;
  }

  if(nota>=9){
    cout << "Excelente\n";
  }else if(nota>=7 && nota<9){
    cout << "Bom\n";
  }else if(nota>=5 && nota <7){
    cout << "Regular\n";
  }else{
    cout << "Reprovado\n";
  }
  
  if(nota>=5 && nota<7){
    cout << "Recuperação\n";
  }else if(nota>7){
    cout << "Aprovado\n";
  }else{
    cout << "Reprovado\n";
  }
  return 0;
}
