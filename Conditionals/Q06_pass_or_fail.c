/*
 * Q6. Write a C program to determine whether a student has passed or failed based on a minimum passing mark of 40.
 */

#include <stdio.h>
int main() {
    float marks;
    printf("Enter your marks: \t");
    scanf("%f",&marks);
    if(marks>=40)
        printf("You have Passed!");
    else
        printf("You have Failed.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter your marks: 28.9
You have Failed.
Output 2:
Enter your marks: 52.7
You have Passed!
Output 3:
Enter your marks: 23
You have Failed.
*/
