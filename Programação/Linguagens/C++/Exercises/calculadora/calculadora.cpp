#include <iostream>
#include <limits>

using namespace std;

int main(){

  int n1, n2, res;
  int opcao;

  cout << "\nSelecione a operação matemática: \n";
  cout << "\n[1]=Adição [2]=Subtração [3]=Multiplicação [4]=Divisão\n";
  cin >> opcao;


  switch(opcao){
    case 1:
        cout << "Digite o primeiro valor da soma: ";
        cin >> n1;
        cout << "Digite o segundo valor a ser somado: ";
        cin >> n2;
        res = n1 + n2;
        cout << "Resultado: " << res << "\n";
        break;

   case 2:
        cout << "Digite o primeiro valor a ser subtraído: ";
        cin >> n1;
        cout << "Digite o segundo valor a ser subtraído: ";
        cin >> n2;
        res=n1-n2;
        cout << "Resultado: " << res << "\n";
        break;
    case 3:
      cout << "Digite o primeiro valor a ser multiplicado: ";
      cin >> n1;
      cout << "Digite o segundo valor a ser multiplicado: ";
      cin >> n2;
      res=n1*n2;
      cout << "Resultado: " << res << "\n";
      break;
    case 4:
      cout << "Digite o primeiro valor a ser dividido: ";
      cin >> n1;
      cout << "Digite o segundo valor a ser divido: ";
      cin >> n2;
      res=n1/n2;
      cout << "Resultado: " << res << "\n";
      break;
    
    default:
      cout << "Opção inválida! Por favor, selecione uma opção entre 1 e 4." << "\n";
  }
  return 0;
}
