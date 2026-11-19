/*
 * Q54. Write a C program to check whether a given three-digit integer is a palindrome without using loops.
 */

#include <stdio.h>
int main() {
    int num, original_num, first_digit, last_digit;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    if (num < 100 || num > 999) {
        printf("Enter 3 digit Number.");
        return 0;}
    original_num = num;
    last_digit = num % 10;
    first_digit = num / 100;
    if (first_digit == last_digit)
        printf("%d is a palindrome number.\n", original_num);
    else
        printf("%d is not a palindrome number.\n", original_num);
    return 0;
}


/*
Sample Output:
Output 1:
Enter a three-digit integer: 121
121 is a palindrome number.
Output 2:
Enter a three-digit integer: 152
152 is not a palindrome number.
Output 3:
Enter a three-digit integer:22
Enter 3 digit Number.
Output 4:
Enter a three-digit integer:1000
Enter 3 digit Number.
*/
