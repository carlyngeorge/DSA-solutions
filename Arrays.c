#include <stdio.h>

void reverseArray(int arr[], int n) {
    for(int i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array: ");
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    printf("\nReversed Array: ");
    reverseArray(arr, n);
    return 0;
}
