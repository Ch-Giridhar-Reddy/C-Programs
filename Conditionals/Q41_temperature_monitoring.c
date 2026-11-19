/*
 * Q41. Smart Temperature Monitoring System
 */

#include<stdio.h>
int main(){
    float temp;
    printf("Enter Temperature (C):\t");
    scanf("%f", &temp);
    if(temp<20)
        printf("Cold");
    else if(temp<=30)
        printf("Normal");
    else if(temp<=40)
        printf("Hot");
    else
        printf("Critical");
    return 0;
}


/*
Sample Output:
Output 1:
Enter Temperature (C): 18
Cold
Output 2:
Enter Temperature (C): 30
Normal
Output 3:
Enter Temperature (C): 35
Hot
Output 4:
Enter Temperature (C): 100
Critical
*/
