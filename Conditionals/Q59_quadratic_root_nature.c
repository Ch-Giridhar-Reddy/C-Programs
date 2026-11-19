/*
 * Q59. Write a C program to identify the nature of roots of a quadratic equation using the discriminant and handle the case where the coefficient of x² is zero.
 */

#include <stdio.h>
int main() {
    float a, b, c,d;
    printf("Enter Coefficients:");
    scanf("%f %f %f", &a, &b, &c);
    if(a!=0){
        d = (b*b)-(4*a*c);
        if(d>0)
            printf("Roots are Real and Distinct.");
        else if(d<0)
            printf("Roots are imaginary and complex.");
        else
            printf("Roots are equal.");
    }
    else{
        printf("The given equation is not a Quadratic Equation as coefficient of x^2 is 0\n");
        if(b!=0)
            printf("Equation has one unique real root.");
        else if(c==0)
            printf("Infinite Roots");
        else
            printf("Invalid Equation.");
    }
    return 0;
}


/*
Sample Output:
Output 1:
Enter Coefficients:1 -5 6
Roots are Real and Distinct.
Output 2:
Enter Coefficients:1 -4 4
Roots are equal.
Output 3:
Enter Coefficients:1 2 5
Roots are imaginary and complex.
Output 4:
Enter Coefficients:0 2 -4
The given equation is not a Quadratic Equation as coefficient of x^2 is 0
Equation has one unique real root.
Output 5:
Enter Coefficients:0 0 0
The given equation is not a Quadratic Equation as coefficient of x^2 is 0
Infinite Roots
Output 6:
Enter Coefficients:0 0 5
The given equation is not a Quadratic Equation as coefficient of x^2 is 0
Invalid Equation.
*/
