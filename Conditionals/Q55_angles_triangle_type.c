/*
 * Q55. Write a C program to determine whether three given angles can form a triangle and classify it as acute, right, or obtuse.
 */

#include <stdio.h>
int main() {
    float angle1, angle2, angle3, sum;
    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("The angles form a valid triangle.\n");
        if (angle1 == 90.0 || angle2 == 90.0 || angle3 == 90.0)
            printf("Right-angled triangle.\n");
        else if (angle1 > 90.0 || angle2 > 90.0 || angle3 > 90.0)
            printf("Obtuse triangle.\n");
        else
            printf("Acute triangle.\n");
    }
    else
        printf("The angles form an invalid triangle.\n");
    return 0;
}


/*
Sample Output:
Output 1:
Enter the three angles of the triangle: 20 30 40
The angles form an invalid triangle.
Output 2:
Enter the three angles of the triangle: 30 60 90
The angles form a valid triangle.
Right-angled triangle.
Output 3:
Enter the three angles of the triangle: 120 20 40
The angles form a valid triangle.
Obtuse triangle.
Output 4:
Enter the three angles of the triangle: 60 50 70
The angles form a valid triangle.
Acute triangle.
*/
