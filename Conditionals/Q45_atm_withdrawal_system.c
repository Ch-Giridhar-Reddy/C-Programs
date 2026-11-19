/*
 * Q45. Bank ATM Withdrawal System
 * (Based on Q36 with added checks: multiple of 100, max Rs.20000 per transaction.)
 */

#include <stdio.h>
int main() {
    int choice;
    float amount, balance = 10000;
    printf("1. Balance\n2. Cash Withdrawal\n3. Cash Deposit\nEnter your choice (1-3): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:printf("Your current balance is: Rs.%.2f\n", balance);
            break;
        case 2:printf("Enter amount to withdraw: Rs.");
            scanf("%f", &amount);
            if (amount <= 0)
                printf("Error: Invalid withdrawal amount.\n");
            else if (amount != (int)amount || (int)amount % 100 != 0)
                printf("Error: Amount must be in multiples of Rs.100.\n");
            else if (amount > 20000)
                printf("Error: Maximum limit per transaction is Rs.20000.\n");
            else if (amount > balance)
                printf("Transaction Denied! Insufficient balance.\n");
            else {
                balance = balance - amount;
                printf("Please collect your cash.\n");
                printf("New Balance: Rs.%.2f\n", balance);
            }
            break;
        case 3:printf("Enter amount to deposit: Rs.");
            scanf("%f", &amount);
            if (amount <= 0)
                printf("Error: Deposit must be greater than 0.\n");
            else {
                balance = balance + amount;
                printf("Deposit successfully.\n");
                printf("New Balance: Rs.%.2f\n", balance);
            }
            break;
        default:printf("Invalid selection!");
            break;
    }
    return 0;
}


/*
Sample Output:
Output 1:
1. Balance
2. Cash Withdrawal
3. Cash Deposit
Enter your choice (1-3): 2
Enter amount to withdraw: Rs.8000
Please collect your cash.
New Balance: Rs.2000.00
Output 2:
1. Balance
2. Cash Withdrawal
3. Cash Deposit
Enter your choice (1-3): 2
Enter amount to withdraw: Rs.8050
Error: Amount must be in multiples of Rs.100.
Output 3:
1. Balance
2. Cash Withdrawal
3. Cash Deposit
Enter your choice (1-3): 2
Enter amount to withdraw: Rs.25000
Error: Maximum limit per transaction is Rs.20000.
Output 4:
1. Balance
2. Cash Withdrawal
3. Cash Deposit
Enter your choice (1-3): 2
Enter amount to withdraw: Rs.11000
Transaction Denied! Insufficient balance.
Output 5:
1. Balance
2. Cash Withdrawal
3. Cash Deposit
Enter your choice (1-3): 2
Enter amount to withdraw: Rs.-500
Error: Invalid withdrawal amount.
Output 6:
1. Balance
2. Cash Withdrawal
3. Cash Deposit
Enter your choice (1-3): 1
Your current balance is: Rs.10000.00
Output 7:
1. Balance
2. Cash Withdrawal
3. Cash Deposit
Enter your choice (1-3): 3
Enter amount to deposit: Rs.5000
Deposit successfully.
New Balance: Rs.15000.00
Output 8:
1. Balance
2. Cash Withdrawal
3. Cash Deposit
Enter your choice (1-3): 4
Invalid selection!
*/
