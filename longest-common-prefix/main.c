#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize) {

    char buffer[201] = "";

    char* prefix = {"\0"};
    for(int i = 0; i < strsSize; i++){
        for(int j = 0; j < strsSize; j++){
            printf("What is strs[%d][%d] : %c\n", j,i, strs[j][i]);
        }
    }

    printf("What is the value of prefix : %s\n", prefix);

    return prefix;
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
