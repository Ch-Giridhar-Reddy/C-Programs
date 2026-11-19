/*
 * Q4. Write a C program to find the larger of two numbers.
 */

#include <stdio.h>
int main() {
    int num1,num2;
    printf("Enter the numbers:\t");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
        printf("%d is greater than %d.",num1,num2);
    else if(num2>num1)
        printf("%d is greater than %d.",num2,num1);
    else
        printf("Both Numbers are equal.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter the numbers: 12 13
13 is greater than 12.
Output 2:
Enter the numbers: 72 56
72 is greater than 56.
Output 3:
Enter the numbers: 10 10
Both Numbers are equal.
*/
