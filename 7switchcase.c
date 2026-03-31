//SYNTAX
/*int a = 2;
switch (a)
{
case 1 :
      printf("value is 2");
      break;
case 2 :
      printf("value is 3");
default:
      printf("nothing matched");

    break;
}*/


// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("enter your age\n");
//     scanf("%d", &age);

//     switch (age)
//     {
//     case 3:
//         printf("the age is 3\n");
//         break;
//     case 13:
//         printf("the age is 13");
//         break;
//     case 23:    
//         printf("the age is 23");
//         break;



    
//     default:
//             printf(" your age is not 3,13,23");


//         break;
//     }

//     return 0;
// }



// SWITCH

/*#include<stdio.h>
int main()
{
    int age, marks;
    printf("enter your age\n");
    scanf("%d", &age);
     printf("enter your marks\n");
     scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("the age is 3\n");
        switch (marks)
        {
        case 45:
        printf("your marks are 45");
            break;
        
        default:
        printf("your marks are not 45");
            
        }
       
        break;
    case 13:
        printf("the age is 13");
        break;
    case 23:    
        printf("the age is 23");
        break;


    
    default:
            printf(" your age is not 3,13,23");
            

        break;
    }

    return 0;
}

*/




#include<stdio.h>

int main()
{
    int a, c;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &c);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Result = %d", a + c);
            break;

        case '-':
            printf("Result = %d", a - c);
            break;

        case '*':
            printf("Result = %d", a * c);
            break;

        case '/':
            printf("Result = %d", a / c);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}