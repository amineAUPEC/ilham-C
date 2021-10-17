// https://www.tutorialspoint.com/cprogramming/c_structures.htm
#include <stdio.h>
#include <string.h>


struct t_Date{
    unsigned int jour, mois, an; 
};


struct t_Identite
{
    #define nom[10]="";
    #define prenom[10]="";
    char personne[20];
    personne=strcat(personne, nom);
    personne=strcat(personne, prenom);
};


struct t_Adresse
{
    int zip_code;
    char ville;
    
};
