#include <stdio.h>

int main() {
    int coins[] = {1, 2, 5};
    int n = 3;
    int sum = 5;

    int dp[sum + 1];
    for (int i = 0; i <= sum; i++)
        dp[i] = 0;

    dp[0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = coins[i]; j <= sum; j++) {
            dp[j] += dp[j - coins[i]];
        }
    }

    printf("Number of ways: %d\n", dp[sum]);
    return 0;
}
