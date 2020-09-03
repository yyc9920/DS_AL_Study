#include <stdio.h>

int main (void) {
  int x[5] = {1, 2, 3, 4, 5};
  int * px;
  char * tmp;
  px = x;

  for(int i = 0; i < 5; i++) {
    printf("px + %d => %d", i, px+i);
    printf("\t%d\n", *(px+i));
  }
}
