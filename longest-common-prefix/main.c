#include <string.h>
#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize) {

    char buffer[201] = "";

    printf("What is this %s\n", strs[0]);

    printf("What is this %s\n", strs[0][0]);

    for(int i = 0; i < strsSize; i++) {
        int stringSize = strlen(strs[0]);
        for(int j = 0; j < stringSize; j++) {

        }
    }
}

int main(void) {

    int strsSize = 3;
    char* strs[3] = {"flower","flow","flight"};

    longestCommonPrefix(strs, strsSize);

    return 0;
}
