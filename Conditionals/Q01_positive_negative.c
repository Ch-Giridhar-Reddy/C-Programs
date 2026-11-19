/*
 * Q1. Write a C program to check whether a given number is positive or negative.
 */

#include <stdio.h>
int main() {
    int number;
    printf("Enter the Number:\t");
    scanf("%d",&number);
    if(number>=0)
        printf("The Number %d is positive.",number);
    else
        printf("The Number %d is negative.",number);
    return 0;
}


/*
Sample Output:
Output 1:
Enter the Number: -12
The Number -12 is negative.
Output 2:
Enter the Number: 15
The Number 15 is positive.
Output 3:
Enter the Number: 0
The Number 0 is positive.
*/
