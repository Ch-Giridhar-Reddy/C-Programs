/*
 * Q26. Write a C program to determine whether a student is eligible to attend an examination based on attendance percentage and medical exemption.
 */

#include <stdio.h>
int main() {
    float attendance;
    char medical;
    printf("Enter Your Attendance Percentage:\t");
    scanf("%f", &attendance);
    if(attendance<75){
        printf("Do You Have a Medical Exception(Y/N):\t");
        scanf(" %c", &medical);
        if(medical=='Y' || medical=='y')
            printf("Your Eligible to attend the Examination.");
        else
            printf("Your Not Eligible to attend the Examination.");
    }
    else
        printf("Your Eligible to attend the Examination.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Your Attendance Percentage: 35
Do You Have a Medical Exception(Y/N): Y
Your Eligible to Attend the Examination.
Output 2:
Enter Your Attendance Percentage: 55
Do You Have a Medical Exception(Y/N): n
Your Not Eligible to Attend the Examination.
Output 3:
Enter Your Attendance Percentage: 85
Your Eligible to Attend the Examination.
*/
