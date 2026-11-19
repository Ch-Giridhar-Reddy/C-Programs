/*
 * Q7. Write a C program to check whether a given character is a vowel or consonant. Assume the input is an English alphabet.
 */

#include<stdio.h>
int main(){
    char alphabet;
    printf("Enter your English Alphabet: ");
    scanf("%c",&alphabet);
    if(alphabet=='a' || alphabet=='e' || alphabet=='i' ||
        alphabet=='o' || alphabet=='u'||alphabet=='A' ||
        alphabet=='E' || alphabet=='I' || alphabet=='O' ||
        alphabet=='U')
        printf("Your alphabet is a vowel.");
    else
        printf("Your alphabet is a constant.");
    return 0;
}


/*
Sample Output:
Output 1:
Enter your English Alphabet: X
Your alphabet is a constant.
Output 2:
Enter your English Alphabet: e
Your alphabet is a vowel.
Output 3:
Enter your English Alphabet: A
Your alphabet is a vowel.
Output 4:
Enter your English Alphabet: b
Your alphabet is a constant.
*/
