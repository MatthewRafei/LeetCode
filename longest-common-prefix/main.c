#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize) {

    char buffer[201] = "";
    char c;
    int n = 0, i = 0;

    if(strsSize == 0) {
        return "";
    }





    return strs[0];
}

/*
unsigned int appendStringToArray(char **strs, const char *str, int *strsSize) {

    char **temp = realloc(void *, unsigned long)
}
*/

int main(void) {

    int strsSize = 3;
    char* strs[3] = {"flower","flow","flight"};

    longestCommonPrefix(strs, strsSize);

    return 0;
}
