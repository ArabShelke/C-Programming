//taking input by fgets n printing the input
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str[50];
//     puts("enter the string: ");
//     fgets(str, 50, stdin);
//     printf("you entered = %s", str);
//     return 0;
// }


// Find length of string
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str[50];
//     int i = 0;
//     printf("enter the string: ");
//     fgets(str, 50, stdin);
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     printf("length of the string = %d", i);
//     return 0;
// }



// Copy one string to another
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str1[50], str2[50];
//     int i = 0;
//     printf("enter the string: ");
//     fgets(str1, 50, stdin);
//     while (str1[i] != '\0')
//     {
//         str2[i] = str1[i];
//         i++;
//     }
//     str2[i] = '\0';
//     printf("copied string: %s", str2);
    

//     return 0;
// }



// Compare two strings
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str1[50], str2[50];
//     int i = 0, flag = 0;
//     printf("enter the first string: ");
//     fgets(str1, 50, stdin);
//     printf("enter the second string: ");
//     fgets(str2, 50, stdin);

//     while(str1[i] != '\0' && str2[i] != '\0')
//     {
//         if (str1[i] != str2[i])
//         {
//             flag = 1;
//             break;
//         }
//         i++;
//     }
//     if(flag == 0)
//     {
//         printf("strings are equal ");
//     }
//     else{
//         printf("strings are not equal");
//     }


    

//     return 0;
// }
