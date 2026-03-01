#include <stdio.h>


int main(){
    
    int var_int;
    int var_char;
    float var_float;
    double var_double;

    int comp_int, comp_char, comp_float, comp_double;

    printf("\nDigite um número inteiro: ");
    scanf("%d%*c",&var_int);

    printf("Digite uma letra: ");
    scanf("%c%*c",&var_char);
    
    printf("Digite um número decimal: ");
    scanf("%f%*c",&var_float);

    printf("Digite outro número decimal: ");
    scanf("%lf%*c",&var_double);

    printf("\nNúmeros digitados: \n Inteiro: %d \n Char: %c \n");

    /*COMPRIMENTOS*/

    comp_int = sizeof(int);
    comp_char = sizeof(char);
    comp_float = sizeof(float);
    comp_double = sizeof(double);

    printf("\nComprimentos: ");
    printf("\n int (%%d): %d", comp_int);
    printf("\n char (%%c): %d", comp_char);
    printf("\n float (%%f): %d", comp_float);
    printf("\n double (%%lf): %d", comp_double);

    printf("\n\n%s\n", "Impressão por por referência!\n");
    
    return 0;
}
