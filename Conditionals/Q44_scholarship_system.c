/*
 * Q44. Student Scholarship Eligibility System
 */

#include <stdio.h>
int main() {
    float marks, income;
    printf("Enter Your Marks (in Percent): ");
    scanf("%f", &marks);
    printf("Enter Your Family Annual Income : ");
    scanf("%f", &income);
    if (marks >= 85.0 && income <= 200000.0)
        printf("Congratulations! You are eligible for a 100%% Scholarship.\n");
    else if (marks >= 75.0 && income <= 300000.0)
        printf("Congratulations! You are eligible for a 50%% Scholarship.\n");
    else if (marks >= 60.0 && income <= 400000.0)
        printf("Congratulations! You are eligible for a 25%% Scholarship.\n");
    else
        printf("You are not eligible for a Scholarship.\nReason: Criteria not met.\n");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Your Marks (in Percent): 90
Enter Your Family Annual Income : 100000
Congratulations! You are eligible for a 100% Scholarship.
Output 2:
Enter Your Marks (in Percent): 65
Enter Your Family Annual Income : 450000
You are not eligible for a Scholarship.
Reason: Criteria not met.
Output 3:
Enter Your Marks (in Percent): 65
Enter Your Family Annual Income : 200000
Congratulations! You are eligible for a 25% Scholarship.
*/
