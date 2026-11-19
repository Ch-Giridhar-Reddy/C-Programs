/*
 * Q2. Write a C program to check whether an integer is even or odd.
 */

#include <stdio.h>
int main() {
    int number;
    printf("Enter the Number:\t");
    scanf("%d",&number);
    if(number%2==0)
        printf("The Number %d is even.",number);
    else
        printf("The Number %d is odd.",number);
    return 0;
}


/*
Sample Output:
Output 1:
Enter the Number: 64
The Number 64 is even.
Output 2:
Enter the Number: 45
The Number 45 is odd.
*/
