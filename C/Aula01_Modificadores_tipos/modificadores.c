#include <stdio.h>

int main (int argc, char** argv){
    
    char var_char = 'A'; 
    unsigned long int var_int = 127827872873;
    float var_float = 1.12F;
    double  var_double = 1.1234;

    printf("char %c\n", var_char);
    printf("int %ld\n", var_int);
    printf("float %f\n", var_float);
    printf("double %f\n", var_double);

    printf("Hello World!\n");
    return 0;
}
