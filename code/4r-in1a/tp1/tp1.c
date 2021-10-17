#include "tp1.h"
#include <stdio.h>
#include <stdlib.h>

void print_message(char *message){

	printf("%s\n", message);

}

int addition(int A, int B) {

	A+=B;
	return A;
}

int minus(int A, int B){

	A-=B;
	return A;
}

int multiplication(int A, int B){

	A*=B;
	return A;
}

int division(int A, int B){

	if(B != 0)
        A=A/B;
        return A;
}

int calcule(int a, int b, char op) {

	int resultat;

	switch (op) {
		case '+':
		resultat = addition(a, b);
		break;

		case '-':
		resultat = minus(a, b);
		break;

		case '*':
		resultat = multiplication(a, b);

		case '/':
		resultat = division(a, b);
		break;

		default:
		printf("Veuillez taper un symbole correct :\n");

	}
	return resultat;
}
