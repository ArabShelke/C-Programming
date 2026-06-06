#include<stdio.h>
int fib(int n)
{
    if (n == 0) 
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return(fib(n-1) + fib(n-2));
    }
    
    
}
int main(int argc, char const *argv[])
{
    int n, i;
    printf("enter the no of terms: ");
    scanf("%d", &n);
    printf("fibonacci series: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d", fib(i));
    }
    
    return 0;
}

