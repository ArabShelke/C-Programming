/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks[5];
    marks[0] = 323;
    marks[1] = 326;
    marks[2] = 332;
    marks[3] = 52;
    marks[4] = 62;
    printf("marks of student 1 is %d", marks[3]);
    marks[3] = 59;
    printf("marks of student 1 is %d", marks[3]);
    return 0;
}*/



/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks[5];
    for (int i = 0; i < 4; i++)
    {
        printf("enter the value of %d element of the array\n", i);
        scanf("%d", &marks[i]);
    }
    return 0;
}*/



/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int arr[] = {1, 2, 4, 5, 8};
    printf("%d", arr[2]);
    return 0;
}*/

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[] = {1, 3, 5, 7};
//     arr[2] = 78;
//     printf("%d", arr[2]);
//     return 0;
// }


//     #include<stdio.h>

// int main()
// {
//     int arr[5], i;

//     printf("Enter 5 numbers:\n");

//     for(i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("Elements are:\n");

//     for(i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5], i;
//     printf(" enter 5 numbers:\n");
//     for ( i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("elements are: ");
//     for ( i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
    
//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int arr[5], i, sum = 0 ;

//     printf("Enter 5 numbers:\n");

//     for(i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//         sum = sum + arr[i];
//     }

//     printf("Sum = %d", sum);

//     return 0;
// }

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5], i, sum = 0;
    printf("enter 5 numbers :");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];

    }
    printf("sum = %d",sum);
    
    
    return 0;
}
