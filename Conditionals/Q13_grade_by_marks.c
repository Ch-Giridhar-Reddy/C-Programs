/*
 * Q13. Write a C program to assign grades A, B, C, D, or F based on a student's marks.
 */

#include <stdio.h>
int main() {
    float marks;
    printf("Enter Your Marks:\t");
    scanf("%f",&marks);
    if(marks>90)
        printf("Your Grade is A.");
    else if(marks>80 && marks<=90)
        printf("Your Grade is B.");
    else if(marks>70 && marks<=80)
        printf("Your Grade is C.");
    else if(marks>60 && marks<=70)
        printf("Your Grade is D.");
    else if(marks>50 && marks<=60)
        printf("Your Grade is E.");
    else
        printf("Your Grade is F.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Your Marks: 99.5
Your Grade is A.
Output 2:
Enter Your Marks: 85
Your Grade is B.
Output 3:
Enter Your Marks: 80
Your Grade is C.
Output 4:
Enter Your Marks: 65
Your Grade is D.
Output 5:
Enter Your Marks: 55
Your Grade is E.
Output 6:
Enter Your Marks: 40
Your Grade is F.
*/
