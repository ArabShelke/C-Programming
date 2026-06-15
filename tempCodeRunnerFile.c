print the address of a
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 87;
    int *ptra = &a;
    printf("the address of a is %x", ptra);
    return 0;
}
