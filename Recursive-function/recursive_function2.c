//Write a C program to find sum of first n numbers using recursion


#include<stdio.h>

int sum(int);

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
