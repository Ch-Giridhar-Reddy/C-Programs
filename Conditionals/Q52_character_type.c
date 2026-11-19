/*
 * Q52. Write a C program to determine whether a character is an uppercase letter, lowercase letter, digit, or special character.
 */

#include <stdio.h>
int main() {
    char character;
    printf("Enter any character: ");
    scanf("%c", &character);
    if (character >= 'A' && character <= 'Z')
        printf("'%c' is an UPPERCASE letter.", character);
    else if (character >= 'a' && character <= 'z')
        printf("'%c' is a LOWERCASE letter.", character);
    else if (character >= '0' && character <= '9')
        printf("'%c' is a DIGIT.", character);
    else
        printf("'%c' is a SPECIAL CHARACTER.", character);
    return 0;
}


/*
Sample Output:
Output 1:
Enter any character: G
'G' is an UPPERCASE letter.
Output 2:
Enter any character: b
'b' is a LOWERCASE letter.
Output 3:
Enter any character: 4
'4' is a DIGIT.
Output 4:
Enter any character: `
'`' is a SPECIAL CHARACTER.
*/
