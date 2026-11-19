/*
 * Q8. Write a C program to check whether a given year is a leap year.
 */

#include<stdio.h>
int main(){
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0)
        printf("%d is a leap year.",year);
    else
        printf("%d is a not leap year.",year);
    return 0;
}


/*
Sample Output:
Output 1:
Enter Year: 2024
2024 is a leap year.
Output 2:
Enter Year: 2400
2400 is a leap year.
*/
