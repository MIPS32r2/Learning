#include <iostream>

using namespace std;

int main(){

//TIPO NOME;
//TIPO NOME = VALOR;

int vidas=0; //recebe valores inteiros
char letra='B'; //recebe caracteres de tamanho de 1 byte, letras.
double decimal1=5.2; //recebe valores com vírgula, 2,4999999999
float decimal2=5.2; // converte para um valor de precisão menor, 2,4. separador decimal é o ponto//
bool vivo=true; //recebe valor verdadeiro ou falso, true or false
string nome="Josué"; //Recebe caracteres maiores

cout << "Digite o número de Vidas: ";
cin >> vidas;
cout << "Digite uma letra: ";
cin >> letra;
cout << "Dinheiro: ";
cin >> decimal1;
cout << "Digite seu nome: ";
cin >> nome;


cout <<"\n";
cout << vidas << "\n";
cout << letra << "\n";
cout << decimal1 << "\n";
cout << vivo << "\n";
cout << nome << "\n";



return 0;
}
