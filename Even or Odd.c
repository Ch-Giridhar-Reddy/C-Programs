//C program to check whether a given number is even or odd.
#include <stdio.h>
int main() {
int number;
printf("Enter the Number:\t");
scanf("%d",&number);
if(number%2==0)
printf("The Number %d is even.",number);
else
printf("The Number %d is odd.",number);
return 0;
}