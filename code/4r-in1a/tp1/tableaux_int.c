#include <stdio.h>

int mon_tableau[3]={1,5,6};


int main(void) {
  int result = print_int_tab(mon_tableau);

  printf("Result : %d \n", result);
  return 0;

}



int print_int_tab(unsigned int tableau[]){
    int j;
    for (j = 0; j < 3; j++ ) {
        printf("Element[%d] = %d\n", j, tableau[j] );
    }
    return 0; 
}







