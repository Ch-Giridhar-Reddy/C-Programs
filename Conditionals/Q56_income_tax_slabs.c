/*
 * Q56. Write a C program to calculate income tax using predefined tax slabs and progressive tax calculation.
 */

#include <stdio.h>
int main() {
    float income, tax;
    printf("Enter your Annual Income: ");
    scanf("%f", &income);
    if (income > 600000)
        tax = (300000 * 0.10)+ (income - 600000) * 0.20;
    else if (income > 300000)
        tax = (income - 300000) * 0.10;
    else
        tax = 0;
    printf("Progressive Tax: %.2f\n", tax);
    return 0;
}


/*
Sample Output:
Output 1:
Enter your Annual Income: 290000
Progressive Tax: 0.00
Output 2:
Enter your Annual Income: 450000
Progressive Tax: 15000.00
Output 3:
Enter your Annual Income: 750000
Progressive Tax: 60000.00
*/
