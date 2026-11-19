/*
 * Q23. Write a C program to determine whether a person is eligible for a driving licence based on age and possession of a learner's licence.
 */

#include<stdio.h>
int main(){
    int age;
    char licence;
    printf("Enter Your Age (years):");
    scanf("%d",&age);
    if(age>=18){
        printf("Do You Have a Learner's Licence (Y/N)");
        scanf(" %c", &licence);
        if(licence=='Y'|| licence=='y')
            printf("You are Eligible to get a Driver Licence");
        else
            printf("You are not Eligible to get a Driver Licence\n Reason: Lack of Learner's Licence.");
    }
    else
        printf("You are not Eligible to get a Driver Licence\n Reason: You are Underage.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Your Age (years):19
Do You Have a Learner's Licence (Y/N):N
You are not Eligible to get a Driver Licence
Reason: Lack of Learner's Licence.
Output 2:
Enter Your Age (years):20
Do You Have a Learner's Licence (Y/N):y
You are Eligible to get a Driver Licence
Output 3:
Enter Your Age (years):17
You are not Eligible to get a Driver Licence
Reason: You are Underage.
NOTE: space before %c
*/
