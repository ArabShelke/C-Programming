#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    char op;
    printf("enter two numbers : ");
    scanf("%d%d", &a, &b);
    printf("enter the operator (+,-,*,%,/): ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("result = %d", a + b);
        break;
    case '-':
        printf("result = %d", a - b);
        break;
    case '*':
        printf("result = %d", a * b);
        break;
    case '%':
        printf("result = %d", a % b);
        break;\
    case '/':
        printf("result = %d", a / b);
        break;
    default:
    printf("invalid operator");
        break;
    }
    return 0;
}
