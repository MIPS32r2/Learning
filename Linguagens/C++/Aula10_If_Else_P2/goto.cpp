#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){

    int n1,n2,res;
    char opc;

    inicio:
    
    system("clear");


    cout << "Digite o valor da primeira nota: ";
    cin >> n1;
    cout << "Digite o valor da segunda nota: ";
    cin >> n2;

    res=n1+n2;

/*
  >= 60 => Aprovado
  >= 40 ^ <60 Recuperação
  <40 Reprovado

*/


    if(res >= 60){
      cout << "\nAluno Aprovado\n";
    }else if (res >=40){
      cout << "\nRecuperação\n";
    }else{
      cout << "\nAluno Reprovado\n";
    }

  cout << "\nDigitar outras notas? [s/n]: ";
  cin >> opc;

  if (opc == 's' or opc=='S'){
    goto inicio;
  }
  
  system("clear");

  return 0;
}
