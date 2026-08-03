// DO-WHILE LOOP
/*#include<stdio.h>

int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i=i+1;
    } while (i<=5);
    
    return 0;
}
*/

//WHILE LOOP
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i = 1;
    while(i <= 5)
    {
        printf("%d\n", i);
        i ++;
    }
    
    return 0;
}
*/


// FOR LOOP

/*
#include<stdio.h>
int main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
*/

// MULTIPLICATION TABLE 
/*
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("enter number");
    scanf("%d", &n);

    for(i = 1; i<=10; i++)
    {
        printf("%d X %d= %d\n",n, i, n*i);
    }
    return 0;
}*/



//TYPECASTING\\

/*#include<stdio.h>

int main()
{
    int a = 5,b = 2;
    float result;

    result = (float)a / b;

    printf("Result = %f", result);

    return 0;
}*/



//|| IMPLICIT||\\

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a = 10;
//     float b;
//     b = a;
    
//     return 0;
// }


/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("enter value of a:");
    scanf("%d",&a);
    int b;
    printf("enter value of b:");
    scanf("%d",&b);
    float avg;
    avg = (float)(a+b)/2;
    printf("Average = %f", avg);

    return 0;
}*/




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




//Write a C program to take input from
//user and find sum using function.

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

