#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {

    //lastDigit = number % 10
    // reverse = (reverse * 10) + lastDigit

    // If number is negative it will never be true
    if(x < 0){
        return false;
    }

    int startNumber = x;
    int lastDigit = 0;
    int reverse = 0;

    while(x != 0) {

        lastDigit = x % 10;
        reverse = reverse * 10 + lastDigit;
        x /= 10;
    }

    if(reverse == startNumber) {
        return true;
    }
    else {
        return false;
    }

    return true;

}

int main(void) {

    int x = 1221;
    printf("Anwser is %d\n", isPalindrome(x));

    return 0;
}
