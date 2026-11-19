/*
 * Q14. Write a C program to classify a person as child, teenager, adult, or senior citizen based on age.
 */

#include <stdio.h>
int main() {
    int age;
    printf("Enter Your Age in years:");
    scanf("%d",&age);
    if(age<13)
        printf("Your a Child.");
    else if(age<18 && age>=13)
        printf("Your a Teenager.");
    else if(age>=18 && age<65)
        printf("Your an Adult.");
    else
        printf("Your a Senior Citizen.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Your Age in years:10
Your a Child.
Output 2:
Enter Your Age in years:16
Your a Teenager.
Output 3:
Enter Your Age in years:45
Your an Adult.
Output 4:
Enter Your Age in years:65
Your a Senior Citizen.
*/
