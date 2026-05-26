// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("Enter the the number you want multiplication of :");
//     scanf("%d", &num);
//     printf("The multiplication table of %d\n", num);
//     printf("%d * 1 = %d\n", num, num * 1 );
//     printf("%d * 2 = %d\n", num, num * 2 );
//     printf("%d * 3 = %d\n", num, num * 3 );
//     printf("%d * 4 = %d\n", num, num * 4 );
//     printf("%d * 5 = %d\n", num, num * 5 );
//     printf("%d * 6 = %d\n", num, num * 6 );
//     printf("%d * 7 = %d\n", num, num * 7 );
//     printf("%d * 8 = %d\n", num, num * 8 );
//     printf("%d * 9 = %d\n", num, num * 9 );
//     printf("%d * 10 = %d\n",num, num * 10);
//     return 0;
// }


// #include<stdio.h>
// #define PI 3.14
// int main(int argc, char const *argv[])
// {
//     int a = 8;
//     const float b = 7.333;
//     printf("tab character \t\t my hero \a %f", PI);
//     return 0;
// }/


// #include <windows.h>

// int main()
// {
//     Beep(2000, 4000);
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a, b;
//     char op;
    
//     printf("enter first number : ");
//     scanf("%d", &a);

//     printf("enter opertor(+, -, *, /): ");
//     scanf(" %c", &op);
    
//     printf("enter second number : ");
//     scanf("%d", &b);

//     if(op == '+')
//     {
//         printf("answer = %d", a + b);
//     }
//     else if(op == '-')
//     {
//         printf("answer = %d", a - b);
//     }
//     else if(op == '*')
//     {
//         printf("answer = %d", a * b);
//     }
//     else if(op == '/')
//     {
//         if (b != 0)
        
//             printf("answer = %d", a / b);
//             else
            
//                 printf(" %d cannot divide by zero", a);
            
        
        
//     }
//     else
//     {
//         printf("invalid operator");
//     }
    
//     return 0;
// }