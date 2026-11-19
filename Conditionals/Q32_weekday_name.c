/*
 * Q32. Write a C program to display the name of a weekday based on a number from 1 to 7.
 */

#include <stdio.h>
int main(){
    int number;
    printf("Enter the Number:");
    scanf(" %d", &number);
    switch(number){
        case 1: printf("Monday");
            break;
        case 2: printf("Tuesday");
            break;
        case 3: printf("Wednesday");
            break;
        case 4: printf("Thursday");
            break;
        case 5: printf("Friday");
            break;
        case 6: printf("Saturday");
            break;
        case 7: printf("Sunday");
            break;
        default: printf("Enter a Valid Number.");
    }
    return 0;
}


/*
Sample Output:
Output 1:
Enter the Number:1
Monday
Output 2:
Enter the Number:2
Tuesday
Output 3:
Enter the Number:3
Wednesday
Output 4:
Enter the Number:4
Thursday
Output 5:
Enter the Number:5
Friday
Output 6:
Enter the Number:6
Saturday
Output 7:
Enter the Number:7
Sunday
Output 8:
Enter the Number:8
Enter a Valid Number.
*/
