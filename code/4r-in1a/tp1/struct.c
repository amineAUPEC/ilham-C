// https://www.tutorialspoint.com/cprogramming/c_structures.htm
// https://www.commentcamarche.net/contents/119-les-structures-en-langage-c
#include <stdio.h>
#include <string.h>


struct t_Date{
    unsigned int jour, mois, an; 
};


struct t_Identite
{
    #define nom [10]="";
    #define prenom [10]="";
    char personne[20];
    // personne=strcat(personne, nom);
    // personne=strcat(personne, prenom);
};


struct t_Adresse
{
    int zip_code;
    char ville;
    
};

int main(void)
{
    struct t_Date d1;
    d1.an=2016;

    int resultat = est_bissextile(d1.an);
    return 0;
}

int est_bissextile(int annee_test)
{
    printf("L'année : %d \n", annee_test);

    if (annee_test % 400 == 0){
        printf("Cette année est bissextile ! \n");
        return 1;
    }
    else if (annee_test % 4 == 0 && annee_test %100 != 0){
        printf("Cette année est bissextile !! \n");
        return 1;
    }
    else {
        printf("Cette année n'est pas bissextile \n");
        return 0;
    }
    return 0;
}