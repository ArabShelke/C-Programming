//Write a C program to find factorial using recursion
#include<stdio.h>

// Function Prototype
/*int fact(int);

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = fact(n);

    printf("Factorial = %d\n", result);

    return 0;
}

// Recursive Function
int fact(int n)
{
    if(n == 0)
        return 1;   // Base case

    return n * fact(n - 1);   // Recursive call
}*/

// Sum of n numbers
#include<stdio.h>

int sum(int n);

int main()
{
    int n, result;

    printf("Enter n: ");
    scanf("%d", &n);

    result = sum(n);

    printf("Sum = %d\n", result);

    return 0;
}

int sum(int n)
{
    if(n == 0)
        return 0;

    return n + sum(n - 1);
}