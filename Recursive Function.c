//Write a C program to print numbers from 1 to n using recursion.
#include<stdio.h>

void print(int);

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    print(n);

    return 0;
}

void print(int n)
{
    if(n == 0)
        return;

    print(n - 1);
    printf("%d ", n);
}