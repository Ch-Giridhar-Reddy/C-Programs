/*
 * Q17. Write a C program to determine whether three sides form an equilateral, isosceles, or scalene triangle, or an invalid triangle.
 */

#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if ((a + b <= c) || (a + c <= b) || (b + c <= a) ||a <= 0 || b <= 0 || c <= 0)
        printf("The sides form an INVALID triangle.");
    else if (a == b && b == c) {
        printf("The sides form an Equilateral triangle.");
    }
    else if (a == b || b == c || a == c) {
        printf("The sides form an Isosceles triangle.");
    }
    else {
        printf("The sides form a Scalene triangle.");
    }
    return 0;
}


/*
Sample Output:
Output 1:
Enter the three sides of the triangle: 0 0 0
The sides form an INVALID triangle.
Output 2:
Enter the three sides of the triangle: 2 3 6
The sides form an INVALID triangle.
Output 3:
Enter the three sides of the triangle: 5 5 5
The sides form an Equilateral triangle.
Output 4:
Enter the three sides of the triangle: 2 21 21
The sides form an Isosceles triangle.
Output 5:
Enter the three sides of the triangle: 2 3 4
The sides form a Scalene triangle.
*/
