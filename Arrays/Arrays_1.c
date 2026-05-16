// Accessing an array element

/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int arr[] = {1, 3, 6, 8};
    printf("%d", arr[3]);
    return 0;
}
*/




// Changing an array element


// #include<stdio.h>
// int main()
// {int arr[] = {1, 3, 4, 5};
// arr[2] = 24;
// printf("%d", arr[2]);
// return 0;
// }





//Write a C program to take 5 numbers in array and print them.
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5], i;
//     printf("enter 5 numbers: ");
//     for(i = 0; i < 5; i++)
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


//Write a C program to find sum of 5 numbers using array.

#include<stdio.h>

int main()
{
    int arr[5], i, sum = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
