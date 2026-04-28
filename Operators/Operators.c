
// FOR INTEGER

// #include<stdio.h>

// int main(int argc, char const *argv[])
//  {
//     int a, c ;
//     a = 90;
//     c = 15;
    // printf("a + c = %d\n", a+c);
    // printf("a - c = %d\n", a-c);
    // printf("a * c = %d\n", a*c);
    // printf("a / c = %d\n", a/c);
//    printf("remainder is %d", a%c);
//     return 0;
//  }



//FOR FLOAT

/*#include<stdio.h>

int main()
{
    int a;
    float c;
    a = 90;
    c = 15.15;
    printf("a + c = %f\n", a+c);
    printf("a - c = %f\n", a-c);
    printf("a * c = %f\n", a*c);
    printf("a / c = %f\n", a/c);
    return 0;

}*/

// RELATIONAL OPERATOR

/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int b;
    a = 3;
    b = 4;
    printf("a is equal to b = %d\n", a==b);
    printf("a is not equal to b = %d\n", a!=b);
    printf("a is greaterthan b = %d\n", a>b);
    printf("a is less than b = %d\n", a<b);
    printf("a is greater than or equal to b = %d\n", a>=b);
    printf("a is less than or equal to b = %d\n", a<=b);
    return 0;
}*/


//LOGICAL OPERATORS

/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 35;
    int b = 1;
    printf("a and b =%d\n", a&&b);
    printf("a or b =%d\n", a||b);
    printf("a not b =%d\n", !(a&&b));
    return 0;
}*/



/*write a c program to swap two numbers without
 using third variable*/

 #include<stdio.h>

 int main(int argc, char const *argv[])
 {  int a = 5;
    int b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
   // printf(" %d %d", a, b); 
    return 0;}

