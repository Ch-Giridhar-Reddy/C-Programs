/*
 * Q60. Write a C program to implement a basic calculator using the conditional (?:) operator, including protection against division by zero.
 */

#include <stdio.h>
int main() {
    float num1, num2, result;
    char operator;
    printf("Enter Question: ");
    scanf("%f %c %f", &num1, &operator, &num2);
    result = (operator == '+') ? (num1 + num2) : (operator == '-') ? (num1 - num2) : (operator == '*') ? (num1 * num2) : (operator == '/') ? ((num2 != 0) ? (num1 / num2) : 0) :0;
    if (operator == '/' && num2 == 0)
        printf("Error: Cannot divide by zero!\n");
    else if (operator != '+' && operator != '-' && operator != '*' && operator != '/')
        printf("Enter Valid Operator!\n");
    else
        printf("Result: %.2f\n", result);
    return 0;
}


/*
Sample Output:
Output 1:
Enter Question: 4+5
Result: 9.00
Output 2:
Enter Question: 5-4
Result: 1.00
Output 3:
Enter Question: 22*3
Result: 66.00
Output 4:
Enter Question: 22/8
Result: 2.75
Output 5:
Enter Question: 15 / 0
Error: Cannot divide by zero!
Note: Using ; after every ternary operator will cause the value to be changed again by next ternary operator so we have to link using : and use fallback value at last.
*/
