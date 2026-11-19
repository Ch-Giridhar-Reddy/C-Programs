/*
 * Q58. Write a C program to determine whether the entered time is valid in 24-hour format and categorize it as morning, afternoon, evening, or night.
 */

#include <stdio.h>
int main() {
    int hours, minutes;
    printf("Enter time in 24-hour format: ");
    scanf("%d:%d", &hours, &minutes);
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        printf("Invalid Time!");
        return 0;
    }
    if (hours >= 4 && hours < 12)
        printf("Morning\n");
    else if (hours >= 12 && hours < 16)
        printf("Afternoon\n");
    else if (hours >= 16 && hours < 18)
        printf("Evening\n");
    else
        printf("Night\n");
    return 0;
}


/*
Sample Output:
Output 1:
Enter time in 24-hour format: 4:30
Morning
Output 2:
Enter time in 24-hour format: 12:23
Afternoon
Output 3:
Enter time in 24-hour format: 16:59
Evening
Output 4:
Enter time in 24-hour format: 22:34
Night
Output 5:
Enter time in 24-hour format: 25:72
Invalid Time!
*/
