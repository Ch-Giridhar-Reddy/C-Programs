/*
 * Q35. Write a C program to convert temperatures between Celsius and Fahrenheit using a menu.
 */

#include <stdio.h>
int main() {
    int choice;
    float celsius, fahrenheit;
    printf("1. Convert Celsius to Fahrenheit\n2. Convert Fahrenheit to Celsius\nEnter your choice (1 or 2): ");
    scanf(" %d", &choice);
    switch (choice) {
        case 1:printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
            printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
            break;
        case 2: printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
            printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
            break;
        default: printf("Invalid choice!");
    }
    return 0;
}


/*
Sample Output:
Output 1:
1. Convert Celsius to Fahrenheit
2. Convert Fahrenheit to Celsius
Enter your choice (1 or 2): 1
Enter temperature in Celsius: 36
36.00 Celsius = 96.80 Fahrenheit
Output 2:
1. Convert Celsius to Fahrenheit
2. Convert Fahrenheit to Celsius
Enter your choice (1 or 2): 2
Enter temperature in Fahrenheit: 98
98.00 Fahrenheit = 36.67 Celsius
Output 3:
1. Convert Celsius to Fahrenheit
2. Convert Fahrenheit to Celsius
Enter your choice (1 or 2): 3
Invalid choice!
*/
