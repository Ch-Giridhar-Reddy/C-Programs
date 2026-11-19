/*
 * Q12. Write a C program to classify a number as positive, negative, or zero.
 */

#include <stdio.h>
int main() {
    int number;
    printf("Enter the Number:\t");
    scanf("%d",&number);
    if(number>0)
        printf("The Number %d is positive.",number);
    else if(number<0)
        printf("The Number %d is negative.",number);
    else
        printf("The Number is Zero.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter the Number: 12
The Number 12 is positive.
Output 2:
Enter the Number: -27
The Number -27 is negative.
Output 3:
Enter the Number: 0
The Number is Zero.
*/
