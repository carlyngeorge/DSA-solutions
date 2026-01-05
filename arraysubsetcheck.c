#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 5};
    int n1 = 5, n2 = 3;
    int found;

    for (int i = 0; i < n2; i++) {
        found = 0;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Array 2 is NOT a subset of Array 1\n");
            return 0;
        }
    }

    printf("Array 2 is a subset of Array 1\n");
    return 0;
}
