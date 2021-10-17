#include <stdio.h>

int nb_partition(int n, int t);

int main(void) {
  int first_no_rec=10;
  int second_no_rec=15;
  int result = nb_partition(first_no_rec, second_no_rec);

  printf("Result : %d \n", result);
  return 0;

}


int nb_partition(int n, int t){
    if (n==0){
        return 1;
    }    
    else if (n<0){
        return 0;
    }    
    else if (n >= 0 && t == 1 ){
        return 1;
    }    
    else if (n >= 0 && t >= 1){
        int resultat; 
        resultat = n + t ;
        return resultat;
    }
    return 2;
}