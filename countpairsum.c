#include <stdio.h>

int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int n = 5, sum = 6, count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum)
                count++;
        }
    }

    printf("Number of pairs with sum %d: %d\n", sum, count);
    return 0;
}
