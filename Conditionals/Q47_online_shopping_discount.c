/*
 * Q47. Online Shopping Discount System
 */

#include <stdio.h>
int main() {
    float amount, discount, final_amount;
    printf("Enter Purchase Amount: ");
    scanf("%f", &amount);
    if (amount < 0) {
        printf("Enter Valid Amount.\n");
        return 0;
    }
    if (amount < 1000)
        discount = 0;
    else if (amount < 5000)
        discount = amount * 0.05;
    else if (amount < 10000)
        discount = amount * 0.10;
    else
        discount = amount * 0.15;
    final_amount = amount - discount;
    printf("Discount: Rs. %.2f\n", discount);
    printf("Final Payable Amount: Rs. %.2f\n", final_amount);
    return 0;
}


/*
Sample Output:
Output 1:
Enter Purchase Amount: 750
Discount: Rs. 0.00
Final Payable Amount: Rs. 750.00
Output 2:
Enter Purchase Amount: 1000
Discount: Rs. 50.00
Final Payable Amount: Rs. 950.00
Output 3:
Enter Purchase Amount: 4999.99
Discount: Rs. 250.00
Final Payable Amount: Rs. 4749.99
Output 4:
Enter Purchase Amount: 5000
Discount: Rs. 500.00
Final Payable Amount: Rs. 4500.00
Output 5:
Enter Purchase Amount: 9999.99
Discount: Rs. 1000.00
Final Payable Amount: Rs. 8999.99
Output 6:
Enter Purchase Amount: 10000
Discount: Rs. 1500.00
Final Payable Amount: Rs. 8500.00
Output 7:
Enter Purchase Amount: 25000
Discount: Rs. 3750.00
Final Payable Amount: Rs. 21250.00
Output 8:
Enter Purchase Amount: -50
Enter Valid Amount.
*/
