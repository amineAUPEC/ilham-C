#include <stdio.h>

unsigned char test_string[]="reinvented around you";

int main(void) {
    int resultat=print_string(test_string);
    return 0;

}



int print_string(char mystring[]){
    
    printf("Résultat de la chaîne de caractère : %s \n", mystring);
    return 0; 
}

























