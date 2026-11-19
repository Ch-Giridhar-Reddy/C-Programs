/*
 * Q48. Smart Parking Management System
 * (Same program as Q37.)
 */

#include <stdio.h>
int main() {
    int vehicle_type, hours;
    float total_charge = 0.0;
    printf("1. Two-Wheeler\n2. Car\n3. Bus \nEnter vehicle type (1-3): ");
    scanf(" %d", &vehicle_type);
    printf("Enter total parking duration (in hours): ");
    scanf("%d", &hours);
    if (hours<0){
        printf("Enter Valid Hours.");
        return 0;}
    switch (vehicle_type) {
        case 1: total_charge = hours * 10.0;
            printf("Vehicle Category: Two-Wheeler\n");
            printf("Rate Applied : Rs.10.00 per hour\n");
            break;
        case 2: total_charge = hours * 30.0;
            printf("Vehicle Category: Car\n");
            printf("Rate Applied : Rs.30.00 per hour\n");
            break;
        case 3: total_charge = hours * 50.0;
            printf("Vehicle Category: Bus / Truck\n");
            printf("Rate Applied : Rs.50.00 per hour\n");
            break;
        default: printf("Select a Valid Vehicle Type.\n");
            return 0;
    }
    printf("Total Hours : %d hrs\n", hours);
    printf("Total Amount Due: Rs.%.2f\n", total_charge);
    return 0;
}


/*
Sample Output:
Output 1:
1. Two-Wheeler
2. Car
3. Bus
Enter vehicle type (1-3): 1
Enter total parking duration (in hours): 2
Vehicle Category: Two-Wheeler
Rate Applied : Rs.10.00 per hour
Total Hours : 2 hrs
Total Amount Due: Rs.20.00
Output 2:
1. Two-Wheeler
2. Car
3. Bus
Enter vehicle type (1-3): 2
Enter total parking duration (in hours): 5
Vehicle Category: Car
Rate Applied : Rs.30.00 per hour
Total Hours : 5 hrs
Total Amount Due: Rs.150.00
Output 3:
1. Two-Wheeler
2. Car
3. Bus
Enter vehicle type (1-3): 5
Enter total parking duration (in hours): 2
Select a Valid Vehicle Type.
Output 4:
1. Two-Wheeler
2. Car
3. Bus
Enter vehicle type (1-3): 3
Enter total parking duration (in hours): -2
Enter Valid Hours.
*/
