int main(int argc, char *argv[])
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
  return 0;
}

// trouvable sur internet 



// cette partie sur les pointeurs et malloc est sauté
// https://www.delftstack.com/fr/howto/c/argv-in-c/#utilisez-memccpy-pour-concat%25C3%25A9ner-les-arguments-de-la-ligne-de-commande-en-c