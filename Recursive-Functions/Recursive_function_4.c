//Write a C program to find factorial using recursion             


/*#include<stdio.h>
int factorial(int number)
{
    if(number == 1 || number == 0)
    {
        return 1;
    }
    else{
        return(number * factorial(number - 1));
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf(" Enter the number you want factorial of ");
    scanf("%d", &num);
    printf("the factorial of %d is %d", num, factorial(num));
    return 0;
}*/





//Fibonacci using recursion


// #include<stdio.h>
// int fib(int n)
// {
//     if(n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     else{
//         return (fib(n - 1) + fib(n - 2));
//     }
    
// }
// int main(int argc, char const *argv[])
// {
//     int n ,i;
//     printf("enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci series: ");
//     for ( i = 0; i < n; i++)
//     {
//         printf("%d", fib(i));
//     }
    
//     return 0;
// }





//Find sum of first n numbers using recursion

/*#include<stdio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n + sum(n - 1));
    }
}
int main(int argc, char const *argv[])
{
    int n, result;
    printf("enter n: ");
    scanf("%d", &n);
    result = sum(n);
    printf("sum = %d\n", result);
    return 0;
}*/


//Print numbers from 1 to n using recursion

// #include<stdio.h>

// void print(int n)
// {
//     if(n == 0)
//         return;

//     print(n - 1);
//     printf("%d ", n);
// }

// int main()
// {
//     int n;

//     printf("Enter n: ");
//     scanf("%d", &n);

//     print(n);

//     return 0;
// }

