#include <stdio.h>

int main() {
    int n;
    printf("Enter number of stairs: ");
    scanf("%d", &n);

    if (n <= 2) {
        printf("Ways: %d\n", n);
        return 0;
    }

    int dp[n + 1];
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    printf("Ways: %d\n", dp[n]);
    return 0;
}
