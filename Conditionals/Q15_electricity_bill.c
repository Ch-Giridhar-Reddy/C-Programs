/*
 * Q15. Write a C program to calculate electricity charges using different unit-consumption slabs.
 */

#include <stdio.h>
int main() {
    float units,bill;
    printf("Enter No. of Units:");
    scanf("%f",&units);
    if(units<=100){
        bill = units*3;
        printf("Your Electricity Bill is %0.2f",bill);
    }
    else if(units<=200 && units>100){
        bill = 100*3 + (units-100)*5;
        printf("Your Electricity Bill is %0.2f",bill);
    }
    else{
        bill = 100*3+100*5+(units-200)*8;
        printf("Your Electricity Bill is %0.2f",bill);
    }
    return 0;
}


/*
Sample Output:
Output 1:
Enter No. of Units:20
Your Electricity Bill is 60.00
Output 2:
Enter No. of Units:192
Your Electricity Bill is 760.00
Output 3:
Enter No. of Units:342
Your Electricity Bill is 1936.00
*/
