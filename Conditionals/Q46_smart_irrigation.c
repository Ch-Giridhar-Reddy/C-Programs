/*
 * Q46. Smart Irrigation System
 */

#include<stdio.h>
int main(){
    float moisture;
    printf("Enter Soil Moisture Percentage:");
    scanf(" %f", &moisture);
    if(moisture<0 || moisture>100){
        printf("Enter Valid Moisture Percentage");
        return 0;
    }
    if(moisture<30)
        printf("Turn ON water pump");
    else if(moisture>=30 && moisture<=60)
        printf("Maintain normal condition");
    else
        printf("Turn OFF water pump");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Soil Moisture Percentage:102
Enter Valid Moisture Percentage
Output 2:
Enter Soil Moisture Percentage:27
Turn ON water pump
Output 3:
Enter Soil Moisture Percentage:49
Maintain normal condition
Output 4:
Enter Soil Moisture Percentage:72
Turn OFF water pump
*/
