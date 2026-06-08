// count the even numbere in the array 
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5], i, count = 0;
//     printf("enter the 5 elements : \n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] % 2 == 0 )
//         {
//             count ++;
//         }       
//     }
//     printf("the nuber of even number : %d", count);  
//     return 0;
// }





//code to reverse an array
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5], i;
//     printf("enter 5 elements : \n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("reverse array : ");
//     for (int i = 4; i >= 0; i--)
//     {
//         printf("%d", arr[i]);
//     }   
//     return 0;
// }




//code to find number in the array
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[5], i, num, found = 0;
//     printf("enter 5 numbers: \n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("enter the number to search : ");
//     scanf("%d", &num);
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] == num)    
//         {
//             found = 1;
//             break;
//         }
//     }
//     if (found == 1)
//     {
//         printf("number found");
//     }
//     else{
//         printf("not found");
//     }   
//     return 0;
// }
