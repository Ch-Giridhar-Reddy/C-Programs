/*
 * Q25. Write a C program to determine whether a triangle is valid and, if valid, whether it is right-angled.
 */

#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is VALID.\n");
        if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)){
            printf("It is a right-angled triangle.\n");
        }
        else {
            printf("It is not a right-angled triangle.\n");
        }
    }
    else {
        printf("The triangle is INVALID.\nReason: The sum of two sides must be greater than the third side.\n");
    }
    return 0;
}


/*
Sample Output:
Output 1:
Enter the three sides of the triangle: 3 4 5
The triangle is VALID.
It is a right-angled triangle.
Output 2:
Enter the three sides of the triangle: 3 4 6
The triangle is VALID.
It is NOT a right-angled triangle.
Output 3:
Enter the three sides of the triangle: 2 4 2
The triangle is INVALID.
Reason: The sum of two sides must be greater than the third side.
*/
