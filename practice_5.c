// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char str[] = "hello";
//     int len = strlen(str);
//     printf("length = %d", len);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char str[50];
//     int len ;
//     printf("enter the string: ");
//     fgets(str, 50, stdin);
//     str[strcspn(str, "\n")] = '\0';
//     len = strlen(str);
//     printf("length = %d", len);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char s[]  = "codewithharry";;
//     char t[50];
//     strcpy(t,s);
//     printf("source string = %s\n", s);
//     printf("target string = %s", t);  
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char s[50];
//     char t[50];
//     printf("enter the source string: ");
//     fgets(s, 50, stdin);
//     strcpy(t,s);
//     printf("target string = %s ", t);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char s[] = "hello";
//     char t[] = "world";
//     int cmp = strcmp(s,t);
//     printf("comparison result = %d", cmp);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char s[] = "hello";
//     char t[] = "hello";
//     int cmp = strcmp(s, t);
//     printf("comparison result = %d", cmp);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char s[50], t[50];
//     int cmp;
//     printf("enter the first string : ");
//     fgets(s, 50, stdin);
//     printf("enter the second string : ");
//     fgets(t, 50, stdin);
//     cmp = strcmp(s, t);
//     printf("comparison result = %d",cmp);
//     return 0;
//}


#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s[] = "hello";
    strrev(s);
    printf("enter the reverse = %s", s);
    return 0;
}
