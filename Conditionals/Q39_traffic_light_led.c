/*
 * Q39. Write a C program to select an LED colour (red, green, or orange) using a menu and display its corresponding traffic signal instruction.
 */

#include <stdio.h>
int main() {
    char color_code;
    printf("R - Red (Stop)\nG - Green (Go)\nO - Orange(Slow Down)\nEnter Traffic Light Colour Code: ");
    scanf(" %c", &color_code);
    switch (color_code) {
        case 'R':
        case 'r':printf("Instruction: STOP!\n");
            break;
        case 'G':
        case 'g':printf("Instruction: GO!\n");
            break;
        case 'O':
        case 'o':printf("Instruction: SLOW DOWN!\n");
            break;
        default: printf("Invalid Colour Code!\n");
    }
    return 0;
}


/*
Sample Output:
Output 1:
R - Red (Stop)
G - Green (Go)
O - Orange(Slow Down)
Enter Traffic Light Colour Code: r
Instruction: STOP!
Output 2:
R - Red (Stop)
G - Green (Go)
O - Orange(Slow Down)
Enter Traffic Light Colour Code: G
Instruction: GO!
Output 3:
R - Red (Stop)
G - Green (Go)
O - Orange(Slow Down)
Enter Traffic Light Colour Code: O
Instruction: SLOW DOWN!
*/
