//||||FUNCTION||||\\\

// #include<stdio.h>
// int sum(int a, int b)
// {
//     return a+b;
// }
// int main(int argc, char const *argv[])
// {
//     // int a, b, c;
//     int a =12;
//     int b =15;
//     int c =sum(a, b);
//     printf("the sum is %d", c);
//     return 0;
// }

// #include <stdio.h>

// void sum(int a, int b)
// {
//     int c = a + b;
//     printf("Sum = %d\n", c);
// }

// int main()
// {
//     sum(4, 5);
//     return 0;
// }

// #include <stdio.h>

// void func(int a, int b) {
//     printf("%d", a * b);
// }

// int main() {
//     func(2, 3);
// }(

// #include<stdio.h>
// int getvalue()
// {
//     int x = 10;
//     return x;
// }
// int main(int argc, char const *argv[])
// {
//     int num;
//     num = getvalue();
//     printf("num = %d\n", num);
//     return 0;
// }

//||with argument n with return value||\\


// #include <stdio.h>

// int sum(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     int result;
//     result = sum(4, 5);
//     printf("Sum = %d\n", result);
//     return 0;
// }

// Write a C program to take input from
// user and find sum using function.

// #include<stdio.h>

// int sum(int a, int b)
// {
//     return a + b;
// }
// int main(int argc, char const *argv[])
// {
//     int x, y, result;
//     // printf("enter two numbers: ");
//     // scanf("%d %d", &x, &y);
//     printf("enter first number:");
//     scanf("%d", &x);
//     printf("enter second number:");
//     scanf("%d", &y);
//     result = sum(x,y);
//     printf("sum = %d\n", result);
//     return 0;
// }

// #include<stdio.h>
// int multiply(int a, int b)
// {
//     return a*b;
// }
// int main(int argc, char const *argv[])
// {
//     // int result = multiply(3,4);
//     // printf("%d\n",result);
//     // return 0;
//     int x, y, result;
//     printf("enter 1st number:");
//     scanf("%d",&x);
//     printf("enter 2nd number:");
//     scanf("%d",&y);
//     result = multiply(x, y);
//     printf("so multiplication is %d\n", result);
//     return 0;

// }

#include <stdio.h>

// Function Prototype
/*int check(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    check(num);

    return 0;
}

// Function Definition
int check(int n)
{
    if(n % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}*/






// The factorial of number
// using recursion

/*#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
   {
       return 1;
   }
   else
   {
    return(number * factorial(number - 1));
   }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want want factorial of ");
    scanf("%d",&num);
    printf("the factorial of %d is %d\n", num, factorial(num));
    return 0;
}*/




//FIBONACCI SERIES USING RECURSION

// #include<stdio.h>
// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return(fib(n - 1) + fib(n - 2));
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int n, i;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("fibonacci series: ");
//     for ( i = 0; i < n; i++)   
//     {
//         printf("%d", fib(i));
//     }
    
//     return 0;
// }






//SUM OF FIRST N NUMBERS

/*
#include<stdio.h>
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


#include<stdio.h>

void print(int n)
{
    if(n == 0)
        return;

    print(n - 1);
    printf("%d ", n);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    print(n);

    return 0;
}