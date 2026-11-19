/*
 * Q53. Write a C program to check whether a given three-digit integer is an Armstrong number without using loops.
 */

#include <stdio.h>
int main() {
    int num, startnum, digit1, digit2, digit3 ,sum;
    printf("Enter a three-digit integer:");
    scanf("%d", &num);
    if (num < 100 || num > 999) {
        printf("Enter 3 digit Number.");
        return 0;
    }
    startnum = num;
    digit3 = num % 10;
    num = num / 10;
    digit2 = num % 10;
    digit1 = num / 10;
    sum = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);
    if (sum == startnum)
        printf("%d is an Armstrong number.\n", startnum);
    else
        printf("%d is not an Armstrong number.\n", startnum);
    return 0;
}


/*
Sample Output:
Output 1:
Enter a three-digit integer:123
123 is not an Armstrong number.
Output 2:
Enter a three-digit integer:371
371 is an Armstrong number.
Output 3:
Enter a three-digit integer:22
Enter 3 digit Number.
Output 4:
Enter a three-digit integer:1000
Enter 3 digit Number.
*/
