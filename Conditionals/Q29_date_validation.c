/*
 * Q29. Write a C program to check whether a given date is valid, considering the month, number of days, and leap year.
 */

#include <stdio.h>
int main() {
    int month, year, day;
    printf("Enter Date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &day, &month, &year);
    if (month > 12 || month < 1 || day > 31 || day < 1 || year < 1) {
        printf("Invalid Date.\n");
        return 0;
    }
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12) {
        if (day <= 31)
            printf("Valid Date.\n");
        else
            printf("Invalid Date.\n");
    }
    else if (month == 2) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            if (day <= 29)
                printf("Valid Date.\n");
            else
                printf("Invalid Date.\n");
        }
        else {
            if (day <= 28)
                printf("Valid Date.\n");
            else
                printf("Invalid Date.\n");
        }
    }
    else {
        if (day <= 30)
            printf("Valid Date.\n");
        else
            printf("Invalid Date.\n");
    }
    return 0;
}


/*
Sample Output:
Output 1:
Enter Date (DD/MM/YYYY): 15/08/2024
Valid Date.
Output 2:
Enter Date (DD/MM/YYYY): 32/08/2024
Invalid Date.
Output 3:
Enter Date (DD/MM/YYYY): 29/02/2024
Valid Date.
Output 4:
Enter Date (DD/MM/YYYY): 29/02/2025
Invalid Date.
Output 5:
Enter Date (DD/MM/YYYY): 29/02/2000
Valid Date.
Output 6:
Enter Date (DD/MM/YYYY): 29/02/1900
Invalid Date.
*/
