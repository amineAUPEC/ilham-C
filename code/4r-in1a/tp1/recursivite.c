#include <stdio.h>

int nb_partition(int n, int t);

int main(void) {
  int first_no_rec=5;
  int second_no_rec=2;
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
        
        // à compléter n 
        //calculera récursivement le nombre de façons de faire n en utilisant t (qui est égal au nombrede façons de faire n-t avec les nombres de 1 à t)
        // et le nombre de façons de payer n sans utiliser t (qui est égal au nombrede façons de faire n avec les nombres de 1 à t-1)

        resultat = n + t ;


        return resultat;
    }
    return 2;
}