/*
 * Q22. Write a C program to check whether a student is eligible for a scholarship based on marks and family income.
 */

#include<stdio.h>
int main(){
    float marks, income;
    printf("Enter Your Marks:");
    scanf("%f",&marks);
    printf("Enter Your Family Annual Income:");
    scanf("%f",&income);
    if(marks>=85){
        if(income<=800000)
            printf("You are eligible for Scholarship!");
        else
            printf("You are not eligible for Scholarship (High Income)");
    }
    else
        printf("You are not eligible for Scholarship (Low Marks)");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Your Marks:90
Enter Your Family Annual Income:600000
You are eligible for Scholarship!
Output 2:
Enter Your Marks:87
Enter Your Family Annual Income:1000000
You are not eligible for Scholarship (High Income)
Output 3:
Enter Your Marks:83
Enter Your Family Annual Income:800000
You are not eligible for Scholarship (Low Marks)
*/
