/*
 * Q10. Write a C program to check whether the entered temperature is above the specified threshold of 35°C.
 */

#include<stdio.h>
int main(){
    float temp;
    printf("Enter the Temperature in C: ");
    scanf("%f",&temp);
    if(temp>35)
        printf("The Temperature is above the threshold.");
    else if(temp<35)
        printf("The Temperature is below the threshold.");
    else
        printf("The Temperature is at the threshold.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter the Temperature in C: 25.6
The Temperature is below the threshold.
Output 2:
Enter the Temperature in C: 52.8
The Temperature is above the threshold.
Output 3:
Enter the Temperature in C: 35
The Temperature is at the threshold.
Output 4:
Enter the Temperature in C: -34
The Temperature is below the threshold.
*/
