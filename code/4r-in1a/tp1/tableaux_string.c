#include <stdio.h>
#include <string.h>

unsigned char test_string[] = "reinvented around you";

int main(void)
{
    int resultat = print_string();
    return 0;
}

int print_string(int argc, char *argv[])
{



       char *buffer;
   char command[512];
   int i = 1;
   for(i = 1; i < argc; i++){
     buffer = malloc(strlen(argv[i]) + 5);
     strcpy(buffer,argv[i]);
     strcat(buffer,".txt");
     sprintf(command,"touch %s\0",buffer);
     system(command);
     free(buffer);
  }
    for (int i = 0; i < argc; i++)
    {

        char all_arg[] = "";

        if (i == 0)
        {
            printf("%d \n", argc);
        }

        printf("argv[%d] = %s ", i, argv[i]);
        strcat(all_arg, " ");
        strcat(all_arg, argv[i]);

        if (i == argc - 1)
        {
            printf("last_iter : %d \n", i);

            printf("allarg: %s \n", all_arg);
            printf("ok %c", all_arg);
        }

        // printf("argv[%d] = %s\n", i, argv[i]);
    }
    // printf("Résultat de la chaîne de caractère : %s \n", mystring);
    return 0;
}