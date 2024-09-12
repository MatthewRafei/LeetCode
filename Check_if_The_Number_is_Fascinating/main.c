#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int concateNums(int x, int y) {
  int pow = 10;
  while(y >= pow) {
    pow *= 10;
  }
  return x * pow + y;
}

bool isFascinating(int n) {

  int x = 2 * n;
  int y = 3 * n;

  int tempRes = 0;
  int result = 0;

  tempRes = concateNums(n, x);
  result = concateNums(tempRes, y);

  int count = 0;
  
  for(int i = 0; i < 9; i++) {

    if( 1 <= result % 10 && result % 10 <= 9) {
      
    }
      
    if(result % 10 == 0) {
      return false;
    }
    
    result /= 10;
  }


  printf("%d\n", count);
}


int main(void) {
  
  printf("Is fascinating : %d\n", isFascinating(192));
  return 0;
}
