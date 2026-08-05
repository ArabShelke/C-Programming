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



//strcmp()
// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char s[] = "hello";
//     char t[] = "world";
//     int cmp = strcmp(s, t);
//     printf("comparison result = %d", cmp);
//     return 0;
// }



//strcat():
// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char s[50] = "hello";
//     char t[] = "world";
//     strcat(s, t);
//     printf("string = %s", s);
//     return 0;
// }



//strrev():
// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char s[] = "hello";
//     printf("reveresd string = %s", strrev(s));
//     return 0;
// }

//__OR__\\

// #include<stdio.h>         
// #include<string.h>
// int main()
// {
//     char s[] = "hello";
//     strrev(s);
//     printf("reversed string = %s", s);
// }


