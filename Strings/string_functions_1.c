//strlen()
// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char str[50];
//     int len;
//     printf("enter the string : ");
//     fgets(str, 50, stdin);
//     str[strcspn(str, "\n")] = '\0';
//     len = strlen(str);
//     printf("length = %d", len);
//     return 0;
// }



//strcpy()
// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char s[50];
//     char t[50];
//     printf("enter the source string: ");
//     fgets(s, 50, stdin);
//     strcpy(t,s);
//     printf("target string = %s", t);
//     return 0;
// }



//strcmp():
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[] = "Hello";
//     char t[] = "World";
//     int cmp = strcmp(s, t);
//     printf("Comparison result = %d", cmp);
//     return 0;
// }



//strrev():
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[] = "Hello";
//     printf("Reversed string = %s", strrev(s));
//     return 0;
// }


//strcat()
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50] = "Hello ";
    char str2[] = "World";

    strcat(str1, str2);

    printf("%s", str1);

    return 0;
}
