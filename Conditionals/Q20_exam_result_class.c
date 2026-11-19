/*
 * Q20. Write a C program to classify an examination result as distinction, first class, second class, pass, or fail.
 */

#include <stdio.h>
int main() {
    float percent;
    printf("Enter Your Percentage:");
    scanf("%f",&percent);
    if(percent>=75)
        printf("Distincition!");
    else if(percent>=60)
        printf("First Class!");
    else if(percent>=50)
        printf("Second Class!");
    else if(percent>=40)
        printf("PASS!");
    else
        printf("FAIL");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Your Percentage:90
Distincition!
Output 2:
Enter Your Percentage:67
First Class!
Output 3:
Enter Your Percentage:57
Second Class!
Output 4:
Enter Your Percentage:43
PASS!
Output 5:
Enter Your Percentage:22
FAIL
*/
