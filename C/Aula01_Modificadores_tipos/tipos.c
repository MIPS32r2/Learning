#include <stdio.h>

int main (){
    
    char var_char = 'A'; //quando se usa aspas simples se usa um byte
    int var_int = 1; //tipo inteiro, número inteiro
    float var_float = 1.0F; //se usa o F para identificar pontos flutuantes internamente 
    double  var_double = 1.234; //mais preciso que o float

    printf("char  %c\n", var_char);
    printf("int %d\n", var_int);
    printf("float %f\n", var_float);
    printf("double %f\n", var_double);

    printf("Hello World"); //uma string é delimitada por aspas duplas, um conjunto de vários char
    return 0;
}

