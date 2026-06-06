// #include <stdio.h>
// int factorial(int number)
// {
//     if (number == 1 || number == 0)
//     {
//         return 1;
//     }
//     else{ 
//         return(number * factorial(number - 1));
//     }

// }
// int main(int argc, char const *argv[])
// {
//     int num;
//     printf("enter the number you want factorial of \n");
//     scanf("%d", &num);
//     printf("the factorial of %d is %d\n", num,factorial(num));
//     return 0;
// }



//conversion of units by using recursion
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333; 
    float cmsToInches = 0.393701; 
    float poundTokgs = 0.453592;
    float inchesTometers = 0.0254;
    float first, second;

    while (1)
    {
        printf("enter the input character\n. q to quit\n   1. kmsToMiles   2. inchesToFoot   3. cmsToInches   4. poundTokgs   5. inchesTometers" );
        scanf("%c", &input);
        switch (input)
        {
        case 'q':
            printf("quiting the program.");
            goto end;
            break;

            case '1':
            printf("enter quantity for first unit : ");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%f kms is equal to %f miles", first, second);
            break;

            case '2':
            printf("enter quantity for first unit : ");
            scanf("%f", &first);
            second = first * inchesToFoot ;
            printf("%f inches is equal to %f foot", first, second);
            break;

            case '3':
            printf("enter quantity for first unit : ");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("cms %f  is equal to inches %f ", first, second);
            break;

            case '4':
            printf("enter quantity for first unit : ");
            scanf("%f", &first);
            second = first * poundTokgs;
            printf("pound %f  is equal to kgs %f ", first, second);
            break;

            case '5':
            printf("enter quantity for first unit : ");
            scanf("%f", &first);
            second = first * inchesTometers ;
            printf("inches %f   is equal to meters %f ", first, second);
            break;


           
        
        default:
            break;
        }
    }
    end:
    
    return 0;
}
