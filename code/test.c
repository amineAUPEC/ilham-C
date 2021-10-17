#include "tp1.h"
#include <stdio.h>
#include <stdlib.h>

extern void print_message(char *);
extern int calcule(int a, int b, char op);
extern int addition(int A, int B);
extern int minus(int A, int B);
extern int multiplication(int A, int B);
extern int division(int A, int B);

int main(int argc, char**argv, int taille, char *chaine[]) {

	int i;

	for (i=1; i<taille; i++) {
		print_message(chaine[i]);
	}
	if (taille == 1) {
		printf("Veuillez entrer une chaine de caractères\n");
	}


	int res = 0;
	int op1 = atoi(argv[1]); //"atoi" convertit la chaîne en entier
	int op2 = atoi(argv[3]);
	char sop = argv[2] [0];
	res = calcule(op1, op2, sop );

	printf("Le resultat de l'operation %d %c %d est %d\n", op1, sop, op2, res);

	return 0;
}
