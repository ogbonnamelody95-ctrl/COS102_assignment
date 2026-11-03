#include <stdio.h>

int main() {
    int originalNum, reversedNum = 0, remainder, tempNum;

    printf("======================================\n");
    printf("      PALINDROME NUMBER CHECKER       \n");
    printf("======================================\n\n");

    printf("Enter an integer number: ");
    if (scanf("%d", &originalNum) != 1) {
        printf("[Error] Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Negative numbers are generally not considered palindromes
    if (originalNum < 0) {
        printf("Result: Negative numbers are not palindromes.\n");
        return 0;
    }

    // Preserve original value for comparison
    tempNum = originalNum;

    // Reverse the digits
    while (tempNum != 0) {
        remainder = tempNum % 10;
        reversedNum = (reversedNum * 10) + remainder;
        tempNum /= 10;
    }

    // Verify palindrome property
    if (originalNum == reversedNum) {
        printf("\nResult: %d IS a palindrome number!\n", originalNum);
    } else {
        printf("\nResult: %d is NOT a palindrome number.\n", originalNum);
    }

    return 0;
}