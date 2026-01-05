#include <stdio.h>

int main() {
    int r, c, key;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter sorted matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int i = 0, j = c - 1;
    while(i < r && j >= 0) {
        if(a[i][j] == key) {
            printf("Found at position (%d, %d)\n", i, j);
            return 0;
        } else if(a[i][j] > key)
            j--;
        else
            i++;
    }

    printf("Element not found\n");
    return 0;
}
