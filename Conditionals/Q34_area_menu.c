/*
 * Q34. Write a C program to calculate the area of a circle, rectangle, or triangle using a menu-driven approach.
 */

#include<stdio.h>
#define pi 3.141
int main(){
    int option;
    float l,b,h,r,area;
    printf("Select Figure (1-Circle, 2- Triangle, 3-Rectangle): \t");
    scanf(" %d", &option);
    switch(option){
        case 1: printf("Enter Radius:");
            scanf(" %f", &r);
            area = pi * r* r;
            printf("Area of Circle: %.2f",area);
            break;
        case 2: printf("Enter Base and Height of Triangle:");
            scanf(" %f %f", &b, &h);
            area = 0.5*(b*h);
            printf("Area of Triangle: %.2f",area);
            break;
        case 3: printf("Enter Length and Breadth of Rectangle:");
            scanf("%f %f", &l, &b);
            area = l*b;
            printf("Area of Rectangle: %.2f",area);
            break;
        default : printf("Select Valid Figure.");
    }
    return 0;
}


/*
Sample Output:
Output 1:
Select Figure (1-Circle, 2- Triangle, 3- Rectangle): 1
Enter Raduis:24
Area of Circle: 1809.22
Output 2:
Select Figure (1-Circle, 2- Triangle, 3- Rectangle): 2
Enter Base and Height of Triangle:12 6
Area of Triangle: 36.00
Output 3:
Select Figure (1-Circle, 2- Triangle, 3- Rectangle): 3
Enter Lenght and Breadth of Rectangle:12 36
Area of Rectangle: 432.00
Output 4:
Select Figure (1-Circle, 2- Triangle, 3- Rectangle): 4
Select Valid Figure.
Limitation: Will only work for Right angled Triangle.
*/
