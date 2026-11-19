/*
 * Q9. Write a C program to check whether a number is divisible by both 3 and 5.
 */

#include<stdio.h>
int main(){
    int number;
    printf("Enter the Number: ");
    scanf("%d",&number);
    if(number%3==0 && number%5==0)
        printf("%d is divisible by both 3 and 5.",number);
    else if(number%3==0 && number%5!=0)
        printf("%d is divisible by 3 and not by 5.",number);
    else if(number%3!=0 && number%5==0)
        printf("%d is divisible by 5 and not by 3.",number);
    else
        printf("%d is not divisible by either 3 or 5.",number);
    return 0;
}


/*
Sample Output:
Output 1:
Enter the Number: 15
15 is divisible by both 3 and 5.
Output 2:
Enter the Number: 9
9 is divisible by 3 and not by 5.
Output 3:
Enter the Number: 25
25 is divisible by 5 and not by 3.
Output 4:
Enter the Number: 46
46 is not divisible by either 3 or 5.
*/
