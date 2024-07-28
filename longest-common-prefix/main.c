#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize) {

    char *buffer = (char*)malloc(sizeof(char) * 200);
    memset(buffer, '\0', 200);
    memcpy(buffer, strs[0], strlen(strs[0]));
    int bufferlen = strlen(buffer);
    int index = 0;

    printf("Whats the size of buffer %d\n", bufferlen);

    //printf("What is this string %s\n", buffer);

    for(int i = 1; i < strsSize; i++) {
        //const char *s = strs[i];
        for(int j = 0; j < strlen(strs[i]); j++) {
            if(strs[i][j] != buffer[index]) {
                buffer[index] = '\0';
                break;
            }
            index++;
        }

        if(strlen(strs[i]) != bufferlen) {
            buffer[strlen(strs[i])] = '\0';
        }

        index = 0;
    }

    return buffer;
}

int main(void) {

    int strsSize = 3;
    char* strs[3] = {"flower","flow","flight"};

    printf("The return value is %s\n", longestCommonPrefix(strs, strsSize));

    return 0;
}
