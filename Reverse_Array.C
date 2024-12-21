#include <stdio.h>

void reverseArray(int arr[], int len) {
    int start = 0, end = len - 1;
    
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, len);

    reverseArray(arr, len);

    printf("Reversed Array: ");
    printArray(arr, len);

    return 0;
}
