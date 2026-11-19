/*
 * Q18. Write a C program to calculate a discount based on the total shopping amount.
 */

#include <stdio.h>
int main() {
    float price, discount;
    printf("Enter Bill:");
    scanf("%f",&price);
    if(price<=5000){
        discount = price*(0.05);
        price=price-discount;
        printf("Your Bill After Discount is Rs. %0.2f",price);
    }
    else if(price<=10000){
        discount = price*(0.1);
        price=price-discount;
        printf("Your Bill After Discount is Rs. %0.2f",price);
    }
    else{
        discount = price*(0.15);
        price = price - discount;
        printf("Your Bill After Discount is Rs. %0.2f",price);
    }
    return 0;
}


/*
Sample Output:
Output 1:
Enter Bill:4999
Your Bill After Discount is Rs. 4749.05
Output 2:
Enter Bill:10000
Your Bill After Discount is Rs. 9000.00
Output 3:
Enter Bill:14989
Your Bill After Discount is Rs. 12740.65
Output 4:
Enter Bill:120000
Your Bill After Discount is Rs. 102000.00
*/
