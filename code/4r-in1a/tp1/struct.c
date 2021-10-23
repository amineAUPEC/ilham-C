// https://www.tutorialspoint.com/cprogramming/c_structures.htm
#include <stdio.h>
#include <string.h>


// struct t_Date{
//     unsigned int jour, mois, an; 
// };


// struct t_Identite
// {
//     #define nom[10]="";
//     #define prenom[10]="";
//     char personne[20];
//     personne=strcat(personne, nom);
//     personne=strcat(personne, prenom);
// };


// struct t_Adresse
// {
//     int zip_code;
//     char ville;
    
// };


int annee_test=2016;
if (annee_test % 400 == 0){
    printf("Cette année est bissextile \n");
    return 1;
}
else if (annee_test % 4 == 0 && annee_test %100 != 0){
    printf("Cette année est bissextile \n");
    return 11;
}
else {
    printf("Cette année n'est pas bissextile \n");
    return 0;
}

#include <stdio.h>


int main(void)
{
    int resultat = annee_test();
    return 0;
}

int annee_test()
{

  int annee_test=1996;
  if (annee_test % 400 == 0){
      printf("Cette année est bissextile nope");
      return 1;
  }
  else if (annee_test % 4 == 0 && annee_test %100 != 0){
      printf("Cette année est bissextile ok");
      return 11;
  }
  else {
      printf("Cette année n'est pas bissextile");
      return 0;
  }
    return 0;
}