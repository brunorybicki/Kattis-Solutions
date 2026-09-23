#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int k;
    scanf("%d", &k);

    int prices[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int maxProfit = prices[k] - prices[0];

    for (int i = 1; i + k < n; i++) {
        if (prices[i + k] - prices[i] > maxProfit) {
            maxProfit = prices[i + k] - prices[i];
        }
    }

    printf("%d\n", maxProfit);
    return 0;
}
