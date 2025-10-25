#include <iostream>
using namespace std;

int main(){

    int val;

    /*cout << "Selecione uma cor: \n";

    cout << "[1,2,3]=Verde, [4,5,6]=Azul\n";

    cin >> val;

    switch(val){
        case 1:
        case 2: 
        case 3:
            cout << "Cor selecionada: Verde\n";
            break;
        case 4:
        case 5:
        case 6:
            cout << "Cor selecionada: Azul\n";
            break;
            default:
            cout << "Valor inválido\n";
    }
    */
    
    cout << "Selecione um transporte:\n";
    cout << "[1]=Carro, [2]=Moto, [3]=Avião, [4]=Helicoptero\n";  

      cin >> val;
      
      switch(val){
        case 1:
        case 2:
            cout << "\nTransporte terrestre\n";
            switch(val){
                case 1:
                    cout << "Carro selecionado\n";
                    break;
                case 2: 
                    cout << "Moto selecionada\n";
                    break;
            }
          break;
        case 3:
        case 4:
            cout << "\nTransport Aereo\n";
            switch(val){
                case 3:
                    cout << "Aviao selecionado\n";
                    break;
                case 4:
                    cout << "Helicoptero selecionado\n";
                    break;
            }
          break;
        default:
            cout << "Transporte selecionado invalido\n";
      }
    cout << "\nPrograma finalizado\n";




  return 0;
}
