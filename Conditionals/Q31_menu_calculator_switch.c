/*
 * Q31. Write a menu-driven C program to perform addition, subtraction, multiplication, and division using switch-case.
 */

#include <stdio.h>
int main(){
    int choice, num1,num2,ans;
    printf("Enter Numbers:");
    scanf("%d %d", &num1, &num2);
    printf("Enter Operation ( 1 - Addition, 2- Subtraction, 3-Multiplication, 4-Division):\n");
    scanf(" %d", &choice);
    switch(choice){
        case 1: ans = num1 + num2;
            printf("Answer = %d",ans);
            break;
        case 2: ans = num1 - num2;
            printf("Answer = %d",ans);
            break;
        case 3: ans = num1 * num2;
            printf("Answer = %d",ans);
            break;
        case 4: ans = num1 / num2;
            printf("Answer = %d",ans);
            break;
        default : printf("Enter Valid Operation.");
    }
    return 0;
}


/*
Sample Output:
Output 1:
Enter Numbers:24 25
Enter Operation ( 1 - Addition, 2- Subtraction, 3-Multiplication, 4-Division):
1
Answer = 49
Output 2:
Enter Numbers:68 45
Enter Operation ( 1 - Addition, 2- Subtraction, 3-Multiplication, 4-Division):
2
Answer = 23
Output 3:
Enter Numbers:22 30
Enter Operation ( 1 - Addition, 2- Subtraction, 3-Multiplication, 4-Division):
3
Answer = 660
Output 4:
Enter Numbers:22 11
Enter Operation ( 1 - Addition, 2- Subtraction, 3-Multiplication, 4-Division):
4
Answer = 2
*/
