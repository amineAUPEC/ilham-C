#include <stdio.h>

unsigned char test_string[] = "reinvented around you";

int main(void)
{
    int resultat = print_string();
    return 0;
}

int print_string(int argc, char *argv[])
{

    for (int i = 0; i < argc; i++)
    {

        if (i == 0)
        {
            printf("DEBUG : Number of arg %d \n", argc);
            printf("Résultat de la chaîne de caractère : "); // at the last iteration
        }

        printf("%s ", argv[i]);
        if (i == argc - 1)
        {
            printf("\n"); // at the last iteration
        }
    }
    // printf("Résultat de la chaîne de caractère : %s \n", mystring);
    return 0;
}