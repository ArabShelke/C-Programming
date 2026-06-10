// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str[50];
//     printf("enter the string :\n");
//     fgets(str, 50, stdin);
//     printf("the entered string is %s", str); 
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str[50];
//     printf("enter the string :\n");
//     fgets(str, 50, stdin);
//     // printf("the entered string is %s", str); 
//     puts(str);
//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     char str[50];
//     int i = 0;

//     printf("Enter string: ");
//     fgets(str, 50, stdin);
//     while(str[i] != '\0')
//     {
//         i++;
//     }
     
//     printf("Length = %d", i);

//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str[100];
//     int i = 0;
//     printf("enter a string: \n ");
//     fgets(str, 100, stdin);
//     while (str[i] != 0)
//     {
//          i ++;
//     }
//     printf("length = %d", i);
    
//     return 0;
// }




// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str1[50], str2[50];
//     int i = 0;
//     printf("enter string: \n");
//     fgets(str1, 50, stdin);
//     while (str1[i] != '\0')
//     {
//         str2[i] = str1[i];
//         i ++ ;
//     }
//     str2[i] = '\0';
//     printf("copied string = %s", str2);
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str1[50], str2[50];
//     int i = 0, flag = 0;

//     printf("enter 1st string");
//     fgets(str1, 50, stdin);
   
//     printf("enter 2nd string");
//     fgets(str2, 50, stdin);
    
//     while (str1[i] != '\0' && str2[i] != '\0')
//     {
//         if (str1[i] != str2[i])
//         {
//             flag = 1;
//             break;
//         }
//         i ++;
//     }

//         if (flag == 0)
//         {
//             printf("strings are equal");
//         }
//         else
//         {
//             printf("strigs are not equal");
//         }
//     return 0;
// }



