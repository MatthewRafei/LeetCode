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

  int a,b,c,d,e,f,g,h,i = 0;

  tempRes = concateNums(n, x);
  result = concateNums(tempRes, y);

  while(result != 0) {
    
    switch(result) {
    case 0:
      return false;
    case 1:
      a++;
      break;
    case 2:
      b++;
      break;
    case 3:
    }
    
     
      


    result /= 10;
  }
  
}


int main(void) {
  
  printf("Is fascinating : %d\n", isFascinating(192));
 
  return 0;
}
