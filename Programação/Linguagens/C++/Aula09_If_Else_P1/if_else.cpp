#include <iostream>
using namespace std;

int main(){

  int num1=10;
  int num2=50;
  int sol=15;
  char opc='s';

/*
  if(teste lógico){
      // se o teste for verdadeiro
  } se não / caso contrário{
      // se o teste for falso
  }
*/


  //Teste Lógico
  // >, < , >=, <=, ==, !=
  // 10 < 5 = false
  // 50 > 25 = true
  // 100 > (50 * 2) = false
  // 100 >= (50 * 2) = true

  if(sol >= 10){

    cout << "Vou ao clube";
  }else{
    cout << "Vou ao cinema";
  }



  return 0;
}
