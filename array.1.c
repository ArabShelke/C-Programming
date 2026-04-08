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


//Reverse an Array
/*#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int temp;

    for(int i = 0; i < 5/2; i++) {
        temp = arr[i];
        arr[i] = arr[5 - i - 1];
        arr[5 - i - 1] = temp;
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}*/


//Count Even and Odd Numbers
/**#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int even = 0, odd = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d, Odd = %d", even, odd);

    return 0;
}*/