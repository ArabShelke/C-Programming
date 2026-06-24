///**BREAK**///
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d\n",i);

    }
    return 0;
}
*/

/*#include<stdio.h>

int main()
{
    int num;

    while(-1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num == 0)
        {
            printf("you entered 0 so we will stop here");
            break;
        }

        printf("You entered %d\n", num);
    }

    return 0;
}
*/




//**CONTINUE**\\



//PRINT NO. 1-10 BUT SKIP 5
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
*/


// PRINT ONLY ODD NO. FROM 1 TO 10

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    for(i = 1;i <= 10;i ++)
    {
        if(i%2==0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
