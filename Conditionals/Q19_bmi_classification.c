/*
 * Q19. Write a C program to classify Body Mass Index (BMI) into underweight, normal, overweight, or obese categories.
 */

#include <stdio.h>
int main() {
    float bmi;
    printf("Enter your BMI:");
    scanf("%f",&bmi);
    if(bmi<18.5)
        printf("Your Underweight.");
    else if(bmi>=18.5 && bmi<25)
        printf("Your Normal.");
    else if(bmi>=25 && bmi<30)
        printf("Your Overweight.");
    else
        printf("Your Obese.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter your BMI:17.9
Your Underweight.
Output 2:
Enter your BMI:22.5
Your Normal.
Output 3:
Enter your BMI:28
Your Overweight.
Output 4:
Enter your BMI:35
Your Obese.
*/
