/*
 * Q57. Write a C program to determine whether a given point (x, y) lies in the first, second, third, or fourth quadrant, or on an axis.
 */

#include <stdio.h>
int main() {
    float x, y;
    printf("Enter coordinate point (x y): ");
    scanf("%f %f", &x, &y);
    if (x == 0.0 && y == 0.0)
        printf("The point (%.2f, %.2f) lies at the Origin.\n", x, y);
    else if (x == 0)
        printf("The point (%.2f, %.2f) lies directly on the Y-Axis.\n", x, y);
    else if (y == 0)
        printf("The point (%.2f, %.2f) lies directly on the X-Axis.\n", x, y);
    else if (x > 0 && y > 0)
        printf("The point (%.2f, %.2f) is in the First Quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%.2f, %.2f) is in the Second Quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%.2f, %.2f) is in the Third Quadrant.\n", x, y);
    else
        printf("The point (%.2f, %.2f) is in the Fourth Quadrant.\n", x, y);
    return 0;
}


/*
Sample Output:
Output 1:
Enter coordinate point (x y): 0 0
The point (0.00, 0.00) lies at the Origin.
Output 2:
Enter coordinate point (x y): 0 2
The point (0.00, 2.00) lies directly on the Y-Axis.
Output 3:
Enter coordinate point (x y): 4 0
The point (4.00, 0.00) lies directly on the X-Axis.
Output 4:
Enter coordinate point (x y): 1 3.4
The point (1.00, 3.40) is in the First Quadrant.
Output 5:
Enter coordinate point (x y): -1 2
The point (-1.00, 2.00) is in the Second Quadrant.
Output 6:
Enter coordinate point (x y): -1 -6
The point (-1.00, -6.00) is in the Third Quadrant.
Output 7:
Enter coordinate point (x y): 1 -8
The point (1.00, -8.00) is in the Fourth Quadrant.
*/
