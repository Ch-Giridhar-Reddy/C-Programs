/*
 * Q50. Smart Home Security System
 */

#include <stdio.h>
int main() {
    int door, motion, mode;
    printf("Enter Security Mode (0 = Disarmed, 1 = Armed): ");
    scanf("%d", &mode);
    printf("Enter Door Sensor Status (0 = Closed, 1 = Open): ");
    scanf("%d", &door);
    printf("Enter Motion Sensor Status (0 = No Motion, 1 = Motion): ");
    scanf("%d", &motion);
    if ((mode != 0 && mode != 1) || (door != 0 && door != 1) || (motion != 0 && motion != 1))
        printf(" Invalid sensor input value. Please enter 0 or 1 only.\n");
    else if (mode == 1 && (door == 1 || motion == 1))
        printf("ALARM ACTIVATED!\n");
    else
        printf("System Safe.\n");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Security Mode (0 = Disarmed, 1 = Armed): 1
Enter Door Sensor Status (0 = Closed, 1 = Open): 1
Enter Motion Sensor Status (0 = No Motion, 1 = Motion): 0
ALARM ACTIVATED!
Output 2:
Enter Security Mode (0 = Disarmed, 1 = Armed): 1
Enter Door Sensor Status (0 = Closed, 1 = Open): 1
Enter Motion Sensor Status (0 = No Motion, 1 = Motion): 1
ALARM ACTIVATED!
Output 3:
Enter Security Mode (0 = Disarmed, 1 = Armed): 1
Enter Door Sensor Status (0 = Closed, 1 = Open): 0
Enter Motion Sensor Status (0 = No Motion, 1 = Motion): 0
System Safe.
Output 4:
Enter Security Mode (0 = Disarmed, 1 = Armed): 0
Enter Door Sensor Status (0 = Closed, 1 = Open): 0
Enter Motion Sensor Status (0 = No Motion, 1 = Motion): 2
Invalid sensor input value. Please enter 0 or 1 only.
*/
