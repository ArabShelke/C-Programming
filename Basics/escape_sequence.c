// Format Specifiers 

/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 8;
    float b =7.225;
    printf("the value of a is %d and the value of b is %f\n",a, b);
    printf("the value of b is %0.3f\n",b);
    // dekh %o.4 se wo 4 decimal palces tak ans dega
    printf("the value of b is %10.2f\n",b);
    // aur %10 isse wo apne digit se count kreke blank space chod dega
    // aur wahi agr %-4f krke kiya to piche blank space dega 

    return 0;
}*/


//CONSTANTS
/*#include<stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    int a = 2;
    const float b = 3.24;
     PI = 7.33;
     /*ye line error degi kyuni apn ne starting mai hi 
    pre processor command ke rup mai constant value de
    di hai*/
    // printf("%f\n", PI);
    // b = 4.24;
    /*dekh ye line run krte hi error kyunki phele b
    ki value apn ne constant kr di hai */ 
//   printf("the value of b is %f", b);
//   return 0;}



// Escape Sequences
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a =8;
//     printf("the value of a is \a %d", a);
//     return 0;
// }



// User Input/Output

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int marks;
//     char name[50];
//     printf("enter the name of student : ");
//     scanf("%s", name);
//     printf("marks  in maths : ");
//     scanf("%d", &marks);
//     printf("marks  in english : ");
//     scanf("%d", &marks);
//     printf("Hello %s , you have scored %d marks ", name, marks);


//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int physics, chemistry, maths;
//     int total;
//     float percentage;
//     char name[50];

//     printf("enter student's name: ");
//     scanf("%s", name);

//     printf("marks in physics: ");
//     scanf("%d", &physics);

//     printf("marks in chemistry: ");
//     scanf("%d", &chemistry);
    
//     printf("marks in maths: ");
//     scanf("%d", &maths);

//     total = physics + chemistry + maths;
//     percentage = (total/300.0)*100;

//     printf(" you have scored %d\n", total);
//     printf("your percentage in PCM %.4f\n", percentage);

   
    
//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int physics, chemistry, maths;
//     int total;
//     float percentage;
//     char name[50];

//     printf("Enter student's name: ");
//     scanf("%s", name);

//     printf("Marks in Physics: ");
//     scanf("%d", &physics);

//     printf("Marks in Chemistry: ");
//     scanf("%d", &chemistry);

//     printf("Marks in Maths: ");
//     scanf("%d", &maths);

//     total = physics + chemistry + maths;
//     percentage = (total / 300.0) * 100;

//     printf("\nStudent Name: %s\n", name);
//     printf("Total Marks = %d\n", total);
//     printf("Percentage = %.2f\n", percentage);

//     return 0;
// }
