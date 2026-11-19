/*
 * Q40. Write a C program to simulate a restaurant billing system that calculates the cost of a selected food item and quantity.
 */

#include <stdio.h>
int main() {
    int item, quantity;
    float price = 0.0, total_bill;
    printf("1. Burger - 120\n2. Pizza - 150\n3. Pasta - 80\n4. French Fries - 100\nEnter Item Code (1-4): ");
    scanf("%d", &item);
    switch (item) {
        case 1: price = 120.00;
            break;
        case 2: price = 150.00;
            break;
        case 3: price = 80.00;
            break;
        case 4: price = 100.00;
            break;
        default:printf("Invalid Item Code!\n");
            return 0;
    }
    printf("Enter Quantity: ");
    scanf("%d", &quantity);
    total_bill = price * quantity;
    printf("\nTotal Bill Amount: %.2f\n", total_bill);
    return 0;
}


/*
Sample Output:
Output 1:
1. Burger - 120
2. Pizza - 150
3. Pasta - 80
4. French Fries - 100
Enter Item Code (1-4): 1
Enter Quantity: 2
Total Bill Amount: 240.00
Output 2:
1. Burger - 120
2. Pizza - 150
3. Pasta - 80
4. French Fries - 100
Enter Item Code (1-4): 2
Enter Quantity: 2
Total Bill Amount: 300.00
Output 3:
1. Burger - 120
2. Pizza - 150
3. Pasta - 80
4. French Fries - 100
Enter Item Code (1-4): 6
Invalid Item Code!
*/
