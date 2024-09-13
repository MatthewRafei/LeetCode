#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

long int catNums(int x, int y) {
  long int pow = 10;
  while(y >= pow) {
    pow *= 10;
  }
  return x * pow + y;
}

bool isFascinating(int n) {

  if(n > 333 || n < 100) {
    return false;
  }

  int x = 2 * n;
  int y = 3 * n;

  int result = catNums(catNums(n, x), y);

  int seenNumbers[10] = {0};
  int count = 0;

  for(int i = 0; i < 9; i++) {

    if( 1 <= result % 10 && result % 10 <= 9) {
      
      for(int j = 0; j < count; j++) {
        if(seenNumbers[j] == result % 10) {
          return false;
        }
      }
      seenNumbers[count++] = result % 10;
    }
      
    if(result % 10 == 0) {
      return false;
    }
    
    result /= 10;
  }

  return true;
}

int main(void) {

  int number = 0;
  
  printf("Is fascinating : %d\n", isFascinating(number));
  return 0;
}
