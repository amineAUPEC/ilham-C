#include <stdio.h>

int mon_tableau[3]={1,5,6};


int main(void) {
  int len_tab = sizeof(mon_tableau)/sizeof(mon_tableau[0]);
  printf("len_tab : %d \n", len_tab);
  int result = print_int_tab(mon_tableau, len_tab);
  return 0;

}



int print_int_tab(unsigned int tableau[], int length){
    int j;
    for (j = 0; j < length ; j++ ) {
        printf("Element[%d] = %d\n", j, tableau[j] );
    }
    return 0; 
}







