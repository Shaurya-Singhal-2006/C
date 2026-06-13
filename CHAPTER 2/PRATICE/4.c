//print 1(true) or 0(false) for the followign statement 

// a. if its sunday and its snowing -> true 
// b. if its monday or it's raining -> true
// if a number is greater that 9 and less than 100 -> true (2 digit number)

#include<stdio.h>
int main (){

    int sunday,snowing,monday,raining;

    sunday = 1;     // true
    snowing = 1;    // true

    printf("%d \n",sunday && snowing);

    monday = 0;      // false
    raining = 1;     // true

    printf("%d \n", monday || raining);

    int number,answer;

    printf("\nenter number:");
    scanf("%d", &number);

    answer = (9 < number) && (100 > number);

    printf("if the answer is 1 then the number is true\n");
    printf("if the answer is 0 then the number is false\n");
    printf("\n%d",answer);

    return 0;
}