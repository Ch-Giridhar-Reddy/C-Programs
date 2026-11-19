/*
 * Q3. Write a C program to determine whether a person is eligible to vote based on age.
 */

#include <stdio.h>
int main() {
    int age;
    printf("Enter your age in years:\t");
    scanf("%d",&age);
    if(age>=18)
        printf("You are eligible to vote.");
    else
        printf("You are not eligible to vote.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter your age in years: 12
You are not eligible to vote.
Output 2:
Enter your age in years: 22
You are eligible to vote.
*/
