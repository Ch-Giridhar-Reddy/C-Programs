/*
 * Q51. Write a C program to find the second-largest among three distinct integers without using arrays or sorting.
 */

#include <stdio.h>
int main() {
    int num1, num2, num3;
    int second_largest;
    printf("Enter three distinct integers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 == num2 || num2 == num3 || num1 == num3) {
        printf("Please enter distinct integers.\n");
        return 0;
    }
    if (num1 > num2 && num1 > num3) {
        if (num2 > num3)
            second_largest = num2;
        else
            second_largest = num3;
    }
    else if (num2 > num1 && num2 > num3) {
        if (num1 > num3)
            second_largest = num1;
        else
            second_largest = num3;
    }
    else {
        if (num1 > num2)
            second_largest = num1;
        else
            second_largest = num2;
    }
    printf("\nThe second-largest number is: %d\n", second_largest);
    return 0;
}


/*
Sample Output:
Output 1:
Enter three distinct integers : 1 2 3
The second-largest number is: 2
Output 2:
Enter three distinct integers : 2 1 4
The second-largest number is: 2
Output 3:
Enter three distinct integers : 2 2 2
Please enter distinct integers.
Output 4:
Enter three distinct integers : 1 2 2
Please enter distinct integers.
*/
