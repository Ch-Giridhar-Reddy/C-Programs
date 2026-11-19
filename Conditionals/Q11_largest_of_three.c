/*
 * Q11. Write a C program to find the largest among three numbers. Also handle the case where two or more numbers are equal.
 */

#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter Numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1==num2 && num2==num3)
        printf("All Numbers are Equal.");
    else if(num2>=num1 && num2>=num3)
        printf("%d is the Largest Number.",num2);
    else if(num1>=num2 && num1>=num3)
        printf("%d is the Largest Number.",num1);
    else
        printf("%d is the Largest Number.",num3);
    return 0;
}


/*
Sample Output:
Output 1:
Enter Numbers: 22 22 22
All Numbers are Equal.
Output 2:
Enter Numbers: 22 32 21
32 is the Largest Number.
Output 3:
Enter Numbers: 3 2 1
3 is the Largest Number.
Output 4:
Enter Numbers: 2 2 3
3 is the Largest Number.
*/
