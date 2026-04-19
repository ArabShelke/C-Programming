//Linear Search
/*#include <stdio.h>

int main() {
    int arr[5] = {3, 7, 2, 9, 5};
    int key = 9;
    int found = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}*/


//Copy One Array to Another
/*#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];

    for(int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}*/

//Find Smallest Element
#include <stdio.h>

int main() {
    int arr[5] = {12, 5, 8, 2, 10};
    int min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Smallest = %d", min);

    return 0;
}
