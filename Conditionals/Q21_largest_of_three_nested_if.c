/*
 * Q21. Write a C program to determine the largest of three numbers using nested if statements.
 */

#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter Numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1>=num2){
        if(num1>=num3)
            printf("%d is the Largest Number.",num1);
        else
            printf("%d is the Largest Number.",num3);
    }
    else if(num2>=num3)
        printf("%d is the Largest Number.",num2);
    else
        printf("%d is the Largest Number.",num3);
    return 0;
}


/*
Sample Output:
Output 1:
Enter Numbers:1 2 3
3 is the Largest Number.
Output 2:
Enter Numbers:10 5 20
20 is the Largest Number.
Output 3:
Enter Numbers:5 25 15
25 is the Largest Number.
Output 4:
Enter Numbers:25 10 30
30 is the Largest Number.
*/
