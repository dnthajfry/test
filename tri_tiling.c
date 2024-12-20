#include <stdio.h>

int main() {
    int dp[31] = {0};

    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 3;
    dp[3] = 0;

    for (int i = 4; i <= 30; i++) {
        dp[i] = 4 * dp[i - 2] - dp[i - 4];
    }

    while (1) {
        int n;
        scanf("%d", &n);
        if (n == -1) {
            break;
        }
        printf("%d\n", dp[n]);
    }

    return 0;
}
