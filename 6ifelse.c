// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int age;
//     printf("Enter your age \n");
//     scanf("%d", &age);
//     printf("you have entered %d as your age\n", age);
//     if (age >= 18)
//     {printf(" you can vote");}
//     else if(age>=103)
//     {printf("your are btw 10 to 18 so u cann't vote");}
//     else if(age>=3)
//     {printf("choti bachi ho kya 3 se 10 saal ki ");}
    
//     else
//     {
//         printf("Aukat dekh ke munna , \ntum abhi us layak nhi ho");
//     }
    
    
//     return 0;
// }


#include<stdio.h>
int main()
{
    int science, maths;
    printf("Enter marks in science: ");
    scanf("%d", &science);
    printf("Enter marks in maths:");
    scanf("%d", &maths);
    if(science>=33 && maths>=33 )
    {
        printf("Gift = 45\n");
    }
    else if(maths>= 33)
    {
        printf("gift = 15\n");
    }
    else if(science>=33)
    {
        printf("gift = 15\n");
    }
    else
    {
        printf("No gift\n");
    }
    return 0;

}