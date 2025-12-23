#include <stdio.h>

int main() {
    int arr[] = {5,1,8,3,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min=arr[0], max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min) min=arr[i];
        if(arr[i]>max) max=arr[i];
    }
    printf("Min: %d, Max: %d\n", min, max);
    return 0;
}
