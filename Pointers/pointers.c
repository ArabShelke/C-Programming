//printing value of a by *(difference operator / indirectional operator)
#include<stdio.h>
int main(){
    printf("lets start pointers \n");
    int a;
    int *ptr = &a;
    printf("enter the value of a ");
    scanf("%d", &ptr);
    
    printf("the value of a is %d ", ptr);
    return 0;
}



//Sum of Array Elements
/*#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}*/



//Find Largest Element
/*#include <stdio.h>

int main() {
    int arr[5] = {10, 25, 7, 89, 15};
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest = %d", max);

    return 0;
}*/

