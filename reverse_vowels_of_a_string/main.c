#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int isVowel(char c) {
    char cx = tolower(c);
    return cx == 'a' || cx == 'e' || cx == 'i' || cx == 'o' || cx == 'u';
}

char* reverseVowels(char* s) {

  if(*s == '\0') {
    return s;
  }
  
  int count = strlen(s);
  char x = '\0';
  
  // count - 1 since arrays are zero based
  for(int i = 0, j = count - 1; i < j;) {

    if(isVowel(s[i]) && isVowel(s[j])) {

      x = s[i];
      s[i] = s[j];
      s[j] = x;

      i++;
      j--;
      
    }
    
    if(!isVowel(s[i])) {
      i++;
    }

    if(!isVowel(s[j])) {
      j--;
    }
    
  }

  return s;
}

int main(void) {

  char s[] = "IceCreAm";

  reverseVowels(s);

  printf("%s\n", s);

  return 0;
}
