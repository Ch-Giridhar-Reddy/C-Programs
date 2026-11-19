/*
 * Q16. Write a C program to calculate an employee's bonus based on years of service.
 */

#include <stdio.h>
int main() {
    float years,bonus;
    printf("Enter No. of years worked:");
    scanf("%f",&years);
    if(years<=5){
        bonus = years*3000;
        printf("You got a Bonus of Rs. %0.2f",bonus);
    }
    else if(years<=10){
        bonus=years*5000;
        printf("You got a Bonus of Rs. %0.2f",bonus);
    }
    else{
        bonus = years*10000;
        printf("You got a Bonus of Rs. %0.2f",bonus);
    }
    return 0;
}


/*
Sample Output:
Output 1:
Enter No. of years worked:3
You got a Bonus of Rs. 9000.00
Output 2:
Enter No. of years worked:9
You got a Bonus of Rs. 45000.00
Output 3:
Enter No. of years worked:12
You got a Bonus of Rs. 120000.00
*/
