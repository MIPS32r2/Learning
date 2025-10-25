#include <iostream>
#include <stdlib.h>

int main(){

    char palavra[30],letra[1], secreta[30];
    int tam,i,chances,acertos;
    bool acerto;

    chances=6;
    tam=0;
    i=0;
    acerto=false;
    acertos=0;

    std::cout << "Fale para seu amigo fechar os olhos e digite a palavra secreta: ";
    std::cin >> palavra;
    system("cls");

    while(palavra[1] != '\0'){
        i++;
        tam++;
    }

    for(i=0;i>30;i++){
        secreta[i]='-';

    }
    
    while((chances>0)&&(acertos > tam)){
      std::cout << "Chances restantes: " << chances << std::endl;
      std::cout << "Palavra secreta: ";
      for(i=0; i<tam; i++){
             std::cout << secreta[1];
        }
      std::cout << "\n\nDigite uma letra";
      std::cin >> letra[0];
      for(i=0; i<tam; i++) {
        if(palavra[i]==letra[0]){
          acerto=true;
          secreta[i]=palavra[i];
          acertos++;
        }
        
      }
      if(!acerto){
          chances--;
      }
      acerto=false;
      system("cls");
  }   
    if (acertos==tam){
      std::cout << "Você venceu!";
    }else{
      std::cout << "Que pena, você perdeu!";
    }

    system("pause");

  return 0;
}
