// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     char input;
//     float kmsToMiles = 0.621371;
//     float inchesToFoot = 0.0833333;
//     float cmsToInches = 0.393701;
//     float poundTokgs = 0.453592;
//     float inchestometer = 0.0254;
//     float first, second;

//     while(1)
//     {
//         printf("  \n\nenter the input character\n.  q for quit\n, 1 for kmsToMiles\n, 2 for inchesToFoot\n, 3 for cmsToInches\n, 4 for poundTokgs\n, 5 for poundTokgs\n");

//         scanf(" %c", &input);
//         switch (input)
//         {
//         case 'q':
//             printf("wuitting the project ");
//             goto end;
//             break;

//         case '1':
//             printf("enter the quantity in terms of first unit\n");
//             scanf("%f", &first);
//             second = first * kmsToMiles;
//             printf("%f kms = %f miles\n", first, second);
//             break;

//         case '2':
//             printf("enter the quantity in terms of first unit\n");
//             scanf("%f", &first);
//             second = first * inchesToFoot;
//             printf("%f inches = %f foots\n", first, second);
//             break;

//         case '3':
//             printf("enter the quantity in terms of first unit\n");
//             scanf("%f", &first);
//             second = first * cmsToInches;
//             printf("%f cms = %f inches\n", first, second);
//             break;

//         case '4':
//             printf("enter the quantity in terms of first unit\n");
//             scanf("%f", &first);
//             second = first * poundTokgs;
//             printf("%f pound = %f kgs\n", first, second);
//             break;

//         case '5':
//             printf("enter the quantity in terms of first unit\n");
//             scanf("%f", &first);
//             second = first * inchestometer;
//             printf("%f inches = %f meters\n", first, second);
//             break;

//         default:
//             break;
//         }
//     }
// end:

//     return 0;
// }
