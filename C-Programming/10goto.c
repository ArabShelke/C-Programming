/*Write a C program to ask the user to enter a positive number. 
If the user enters a negative number,
ask again using goto*/

#include<stdio.h>

int main()
{
    int num;

start:
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Negative number not allowed.\n");
        goto start;
    }

    printf("You entered %d\n", num);

    return 0;
}
