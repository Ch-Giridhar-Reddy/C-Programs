/*
 * Q38. Write a C program to perform unit conversions between metres and kilometres, kilograms and grams, and hours and minutes.
 */

#include <stdio.h>
int main() {
    int choice;
    float value, result;
    printf("1. Metres to Kilometres\n2. Kilograms to Grams\n3. Hours to Minutes\nEnter your choice (1-3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:printf("Enter distance in Metres: ");
            scanf("%f", &value);
            if (value < 0) {
                printf("Distance cannot be negative!\n");
            } else {
                result = value / 1000.0;
                printf("%.2f Metres = %.4f Kilometres\n", value, result);
            }
            break;
        case 2: printf("Enter weight in Kilograms: ");
            scanf("%f", &value);
            if (value < 0) {
                printf("Weight cannot be negative!\n");
            } else {
                result = value * 1000.0;
                printf("%.2f Kilograms = %.2f Grams\n", value, result);
            }
            break;
        case 3:printf("Enter time in Hours: ");
            scanf("%f", &value);
            if (value < 0) {
                printf("Time duration cannot be negative!\n");
            } else {
                result = value * 60.0;
                printf("%.2f Hours = %.2f Minutes\n", value, result);
            }
            break;
        default: printf("Please Select Valid Option.\n");
    }
    return 0;
}


/*
Sample Output:
Output 1:
1. Metres to Kilometres
2. Kilograms to Grams
3. Hours to Minutes
Enter your choice (1-3): 1
Enter distance in Metres: 197
197.00 Metres = 0.1970 Kilometres
Output 2:
1. Metres to Kilometres
2. Kilograms to Grams
3. Hours to Minutes
Enter your choice (1-3): 2
Enter weight in Kilograms: 1.5
1.50 Kilograms = 1500.00 Grams
Output 3:
1. Metres to Kilometres
2. Kilograms to Grams
3. Hours to Minutes
Enter your choice (1-3): 3
Enter time in Hours: 15
15.00 Hours = 900.00 Minutes
Output 4:
1. Metres to Kilometres
2. Kilograms to Grams
3. Hours to Minutes
Enter your choice (1-3): 4
Please Select Valid Option.
*/
