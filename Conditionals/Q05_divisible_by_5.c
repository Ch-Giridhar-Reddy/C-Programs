/*
 * Q5. Write a C program to check whether a given number is divisible by 5.
 */

#include <stdio.h>
int main() {
    int number;
    printf("Enter the number:\t");
    scanf("%d",&number);
    if(number%5==0)
        printf("%d is divisible by 5.",number);
    else
        printf("%d is not divisible by 5.",number);
    return 0;
}


/*
Sample Output:
Output 1:
Enter the number: 25
25 is divisible by 5.
Output 2:
Enter the number: 72
72 is not divisible by 5.
*/
