/*
 * Q33. Write a C program to display the number of days in a month based on the entered month number and year.
 */

#include <stdio.h>
int main(){
    int day, month, year;
    printf("Enter Month and Year:");
    scanf(" %d %d", &month, &year);
    switch(month){
        case 1: printf("31 Days");
            break;
        case 2: if(year%4==0 & year%100!=0 || year%400==0)
            printf("29 Days");
            else
                printf("28 Days");
            break;
        case 3: printf("31 Days");
            break;
        case 4: printf("30 Days");
            break;
        case 5: printf("31 Days");
            break;
        case 6: printf("30 Days");
            break;
        case 7: printf("31 Days");
            break;
        case 8: printf("31 Days");
            break;
        case 9: printf("30 Days");
            break;
        case 10: printf("31 Days");
            break;
        case 11: printf("30 Days");
            break;
        case 12: printf("31 Days");
            break;
        default: printf("Enter Valid Month.");
    }
    return 0;
}


/*
Sample Output:
Output 1:
Enter Month and Year:1 1997
31 Days
Output 2:
Enter Month and Year:2 2024
29 Days
Output 3:
Enter Month and Year:2 2025
28 Days
Output 4:
Enter Month and Year:3 1998
31 Days
Output 5:
Enter Month and Year:4 2024
30 Days
Output 6:
Enter Month and Year:5 2008
31 Days
Output 7:
Enter Month and Year:6 2032
30 Days
Output 8:
Enter Month and Year:7 2025
31 Days
Output 9:
Enter Month and Year:8 2967
31 Days
Output 10:
Enter Month and Year:9 2009
30 Days
Output 11:
Enter Month and Year:12 2925
31 Days
Output 12:
Enter Month and Year:23 2024
Enter Valid Month.
*/
