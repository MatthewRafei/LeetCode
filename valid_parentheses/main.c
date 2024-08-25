#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// (), {}, []

bool isValid(char* s) {
        char arr[10000];
        int j = 0; // Stack index

        while(*s) {
                if(*s == '(' || *s == '{' || *s == '[') {
                        arr[j++] = *s;
                }
                else if(*s == ')' && j > 0 && arr[j - 1] == '(') {
                        j--;
                }
                else if(*s == '}' && j > 0 && arr[j - 1] == '{') {
                        j--;
                }
                else if(*s == ']' && j > 0 && arr[j - 1] == '[') {
                        j--;
                }
                else {
                        return false;
                }
                s++;
        }
        return j == 0;
}

int main(void) {

        char *s = "([)]";
        printf("%d\n", isValid(s));
                
        return 0;

}
