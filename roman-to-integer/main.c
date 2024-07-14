#include <string.h>

// Return value associated with roman numeral
int returnRomanNumberialValue(char c){
    switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
             return 1000;
    }
    return -1;
}

// Convert roman numerial to int
int romanToInt(char* s) {

    // sum is the accumulation of every value in string
    int sum = 0;
    // length will hold the length of the string represented as an int
    int length = strlen(s);

    // Calculate the value of a string of roman numerial
    for(int i = 0; i < length; i++) {
        if(s[i+1] != '\0' && returnRomanNumberialValue(s[i]) < returnRomanNumberialValue(s[i+1])){
            sum += returnRomanNumberialValue(s[i+1]) - returnRomanNumberialValue(s[i]);
            i++;
        }
        else{
            sum += returnRomanNumberialValue(s[i]);
        }
    }
    return sum;
}

int main(void) {
    char s[] = "MCMLXXXIV"; // Should be 1994

    return 0;
}
