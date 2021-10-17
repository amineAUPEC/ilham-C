#include <stdio.h>

char mon_tableau_char[3]={'r','g','b'};

int main(void) {
  int len_tab = sizeof(mon_tableau_char)/sizeof(mon_tableau_char[0]);
  printf("len_tab : %d \n", len_tab);
  int result = print_char_tab(mon_tableau_char, len_tab);
  return 0;

}



int print_char_tab(unsigned char tableau[], int length){
    int j;
    for (j = 0; j < length ; j++ ) {
        printf("Element[%d] = %c\n", j, tableau[j] );
    }
    return 0; 
}













