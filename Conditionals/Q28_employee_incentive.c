/*
 * Q28. Write a C program to calculate an employee's incentive based on department and performance rating.
 */

#include<stdio.h>
int main(){
    char dep, rating;
    float salary, incentive;
    printf("Enter Your Department(T-Tech, S-Sales):");
    scanf("%c", &dep);
    printf("Enter Your Salary:");
    scanf("%f", &salary);
    printf("Enter Your Rating:");
    scanf(" %c",&rating);
    if(dep=='t' || dep=='T'){
        if(rating=='A'|| rating=='a'){
            incentive=salary*0.05;
            printf("Your Incentive is %0.2f",incentive);}
        else if(rating=='B' || rating=='b'){
            incentive=salary*0.03;
            printf("Your Incentive is %0.2f",incentive);}
        else if(rating=='C' || rating=='c'){
            incentive=salary*0.02;
            printf("Your Incentive is %0.2f",incentive);}
        else
            printf("Enter Valid Rating.");
    }
    else if(dep=='s' || dep=='S'){
        if(rating=='A'|| rating=='a'){
            incentive=salary*0.15;
            printf("Your Incentive is %0.2f",incentive);}
        else if(rating=='B' || rating=='b'){
            incentive=salary*0.1;
            printf("Your Incentive is %0.2f",incentive);}
        else if(rating=='C' || rating=='c'){
            incentive=salary*0.05;
            printf("Your Incentive is %0.2f",incentive);}
        else
            printf("Enter Valid Rating.");
    }
    else
        printf("Enter Valid Department.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Your Department(T-Tech, S-Sales):T
Enter Your Salary:20000
Enter Your Rating:A
Your Incentive is 1000.00
Output 2:
Enter Your Department(T-Tech, S-Sales):S
Enter Your Salary:3500
Enter Your Rating:B
Your Incentive is 350.00
Output 3:
Enter Your Department(T-Tech, S-Sales):X
Enter Your Salary:95000
Enter Your Rating:A
Enter Valid Department.
Output 4:
Enter Your Department(T-Tech, S-Sales):T
Enter Your Salary:25000
Enter Your Rating:F
Enter Valid Rating.
Note: space before %c for rating.
*/
