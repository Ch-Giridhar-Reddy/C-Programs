/*
 * Q30. Write a C program to calculate the roots of a quadratic equation and classify them as real and distinct, real and equal, or complex based on the discriminant.
 */

#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    float d, root1, root2, real, imag;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("Invalid Equation!");
        return 0;}
    d= (b*b) - (4*a*c);
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (d== 0) {
        root1 = root2 = -b / (2*a);
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else {
        real = -b / (2 * a);
        imag = sqrt(-d) / (2*a);
        printf("Root 1 = %.2f + %.2fi\n", real, imag);
        printf("Root 2 = %.2f - %.2fi\n", real, imag);
    }
    return 0;
}


/*
Sample Output:
Output 1:
Enter coefficients a, b and c: 0 2 3
Invalid Equation!
Output 2:
Enter coefficients a, b and c: 1 -5 6
Root 1 = 3.00
Root 2 = 2.00
Output 3:
Enter coefficients a, b and c: 1 -4 4
Root 1 = Root 2 = 2.00
Output 4:
Enter coefficients a, b and c: 1 2 5
Root 1 = -1.00 + 2.00i
Root 2 = -1.00 - 2.00i
*/
