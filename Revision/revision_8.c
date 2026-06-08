// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int marks[4];
//     marks[0] = 34;
//     printf("marks of hero is %d", marks[0]);
//     return 0;
// }



//#include<stdio.h>
//int main(int argc, char const *argv[])
// {
//     int marks[4];

//     for (int i = 0; i < 4; i++)
//     {
//         printf("enter the value of %d element of the array\n", i);
//         scanf("%d", &marks[i]);
//     }

//     for (int i = 0; i < 4; i++)
//     {
//         printf("the value of %d element of the array is %d\n", i, marks[i]);
//     }
    
    
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[10] = {1,2,3,45};
//     printf("%d", arr[3]);


//     return 0;
// }



// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[] = {1,2,3,45,6,7};
//     arr[2] = 456;
//     printf("%d", arr[2]);
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[23], i;
//     printf("enter 5 numbers :\n");

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
    
//     printf("elements are: \n");

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d", arr[i]);
//     }
    
    
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[6], i;
//     printf("enter 5 numbers : \n");
    

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
    
//     printf(" elements are : \n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("the %d element of array is %d\n",i, arr[i]);
//     }
    
    
//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int arr[5], i, sum = 0;

//     printf("Enter 5 numbers:\n");

//     for(i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//         sum = sum + arr[i];
//     }

//     printf("Sum = %d", sum);

//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5], i, sum = 0;
//      for (int i = 0; i < 5; i++)
//      {
//         printf(" enter the %d elements: ", i);
//         scanf("%d", &arr[i]);
//         sum = sum + arr[i];

//      }

//      printf("the sum is %d", sum);
     
//     return 0;
// // }


// #include<stdio.h>

// int main()
// {
//     int arr[5], i, max;

//     printf("Enter 5 numbers:\n");

//     for(i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     max = arr[0];

//     for(i = 1; i < 5; i++)
//     {
//         if(arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     printf("Largest = %d", max);

//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5], i, max;
//     printf("enter 5 elements ; \n");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     max = arr[0];

//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] > max)   
//         {
//             max = arr[i];
//         }
        
        
//     }
//     printf("the largest element is %d", max);
    
//     return 0;
// }




// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5], i, count = 0;
//     printf("enter 5 elements: \n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             count ++;
//         }
        
//     }
//     printf("the number of even number is %d", count);
    
     
//     return 0;
// }



// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5], i;
//     printf("enter the 5 elements: \n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("reversed string : \n");
//     for (int i = 4; i >= 0; i--)
//     {
//         printf("%d", arr[i]);
//     }   
//     return 0;
// }



// #include<stdio.h>

// int main()
// {
//     int arr[5], i, num, found = 1;

//     printf("Enter 5 numbers:\n");

//     for(i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter number to search: ");
//     scanf("%d", &num);

//     for(i = 0; i < 5; i++)
//     {
//         if(arr[i] == num)
//         {
//             found = 1;
//             break;
//         }
//     }

//     if(found == 1)
//     {
//         printf("Number Found");
//     }
//     else
//     {
//         printf("Number Not Found");
//     }

//     return 0;
// }



#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5], i, num, found = 0;
    printf("enter 5 numbers: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the number to search: ");
    scanf("%d", &num);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            break;
        }

    }
    if (found == 1)
    {
        printf("number found");
    }
    else{
        printf("number not found");
    }
    return 0;
}
