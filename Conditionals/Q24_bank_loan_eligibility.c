/*
 * Q24. Write a C program to check whether a customer is eligible for a bank loan based on salary, age, and credit score.
 */

#include<stdio.h>
int main(){
    int age;
    float salary, credit_score;
    printf("Enter Your Age, Salary , Credit Score:");
    scanf(" %d %f %f",&age,&salary,&credit_score);
    if(age>=18){
        if(salary>=100000){
            if(credit_score>=750)
                printf("You are Eligible for a Loan.");
            else
                printf("You are Not Eligible for a Loan.\nReason:Low Credit Score.");
        }
        else
            printf("You are Not Eligible for a Loan.\nReason:Low Salary.");
    }
    else
        printf("You are Not Eligible for a Loan.\nReason: Not an Adult.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Your Age, Salary , Credit Score:19 200000 990
You are Eligible for a Loan.
Output 2:
Enter Your Age, Salary , Credit Score:19 200000 650
You are Not Eligible for a Loan.
Reason:Low Credit Score.
Output 3:
Enter Your Age, Salary , Credit Score:22 80000 770
You are Not Eligible for a Loan.
Reason:Low Salary.
Output 4:
Enter Your Age, Salary , Credit Score:17 200000 770
You are Not Eligible for a Loan.
Reason: Not an Adult.
*/
