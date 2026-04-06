// #include<stdio.h>

// int main()
// {
//     char str[50];

//     printf("Enter string: ");
//     //scanf("49%s", str);
//     //fgets(str, 50, stdin);
    

//     printf("You entered: %s", str);

//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str[50];
//     // printf("enter string: ");
//     puts("enter string: ");
//     fgets(str, 50, stdin);
//     printf("you enterd: %s",str);
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


//#include<stdio.h>
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
//     printf("length = %d", i);
    
//     return 0;
// }

#include<stdio.h>

// int main()
// {
//     char str1[50], str2[50];
//     int i = 0;

//     printf("Enter string: ");
//     fgets(str1, 50, stdin);

//     while(str1[i] != '\0')
//     {
//         str2[i] = str1[i];
//         i++;
//     }

//     str2[i] = '\0';

//     printf("Copied string: %s", str2);

//     return 0;
// }


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
//     printf("copied string = %s", str2);
    
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     char str1[50], str2[50];
//     int i = 0, g = 0;

//     printf("Enter first string: ");
//     fgets(str1, 50, stdin);

//     printf("Enter second string: ");
//     fgets(str2, 50, stdin);

//     while(str1[i] != '\0' && str2[i] != '\0')
//     {
//         if(str1[i] != str2[i])
//         {
//             g = 1;
//             break;
//         }
//         i++;
//     }

//     if(g == 0)
//         printf("Strings are equal");
//     else
//         printf("Strings are not equal");

//     return 0;
// }



// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str1[50], str2[50];
//     int i = 0, flag = 0;
//     printf("enter first string: ");
//     fgets(str1, 50, stdin);
    
//     printf("enter second string: ");
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
//     if (flag == 0)
//     {
//         printf("strings are equal");
//     }
//     else{
//         printf("strings are not equal");
//     }
        
//     return 0;

// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str1[50], str2[50];
//     int i = 0, flag = 0;
//     printf("enter the first string : ");
//     fgets(str1, 50, stdin);
//     printf("enter the second string : ");
//     fgets(str2, 50, stdin);

//     while (str1[i] != '\0' && str2[i] != '\0')
//     {
//         if (str1[i] != str2[i])
//         {
//             flag = 1;
//             break;
//         }
//         i++;
//     }
//     if (flag == 0)
//     {
//         printf("strings are equal ");
//     }
//     else{
//         printf("not equal");
//     }
    
    
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     char str[50];
//     int i, len = 0;
//     printf("enter the string: ");
//     fgets(str, 50, stdin);
//     while (str[len] != '\0')
//     {
//         len++;
//     }
//     printf("reversed string: ");
//     for ( i = len; i >= 0; i--)
//     {
//         printf("%c", str[i]);
//     }
    
    

//     return 0;
// }



