/*
 * Q49. Employee Performance Evaluation System
 */

#include <stdio.h>
int main() {
    int score;
    printf("Enter your score (0-100): ");
    scanf("%d", &score);
    if (score < 0 || score > 100)
        printf("Invalid Score!\n");
    else if (score >= 90)
        printf("Outstanding\n");
    else if (score >= 75)
        printf("Excellent\n");
    else if (score >= 60)
        printf("Good\n");
    else if (score >= 40)
        printf("Needs Improvement\n");
    else
        printf("Poor\n");
    return 0;
}


/*
Sample Output:
Output 1:
Enter your score (0-100): 101
Invalid Score!
Output 2:
Enter your score (0-100): 92
Outstanding
Output 3:
Enter your score (0-100): 80
Excellent
Output 4:
Enter your score (0-100): 20
Poor
Output 5:
Enter your score (0-100): -90
Invalid Score!
*/
