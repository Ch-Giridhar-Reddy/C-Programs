/*
 * Q27. Write a C program to check whether a candidate is eligible for campus placement based on CGPA, backlogs, and aptitude score.
 */

#include <stdio.h>
int main() {
    float cgpa, aptitude;
    int backlog;
    printf("Enter Your CGPA:");
    scanf("%f", &cgpa);
    printf("Enter Your Aptitude Score:");
    scanf("%f", &aptitude);
    printf("Enter No. of Backlogs:");
    scanf("%d", &backlog);
    if (cgpa >= 6.0) {
        if (backlog == 0) {
            if (aptitude>= 70)
                printf("Congratulations! You are eligible for campus placement.");
            else
                printf("You are not eligible for campus placement..\nReason: Low Aptitude Score.");
        }
        else
            printf("You are not eligible for campus placement..\nReason: You have active backlogs.");
    }
    else
        printf("You are not eligible for campus placement..\nReason: Low CGPA .");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Your CGPA:7
Enter Your Aptitude Score:78
Enter No. of Backlogs:0
Congratulations! You are eligible for campus placement.
Output 2:
Enter Your CGPA:6
Enter Your Aptitude Score:79
Enter No. of Backlogs:2
You are not eligible for campus placement..
Reason: You have active backlogs.
Output 3:
Enter Your CGPA:5
Enter Your Aptitude Score:90
Enter No. of Backlogs:0
You are not eligible for campus placement..
Reason: Low CGPA .
Output 4:
Enter Your CGPA:7.2
Enter Your Aptitude Score:45
Enter No. of Backlogs:0
You are not eligible for campus placement..
Reason: Low Aptitude Score.
*/
