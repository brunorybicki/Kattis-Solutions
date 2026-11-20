#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int test = 0; test < t; test++) {
        int n;
        scanf("%d", &n);

        int buyPrice[n], buyShares[n], sellPrice[n], sellShares[n];
        int buyCount = 0, sellCount = 0, stock = -1;

        for (int i = 0; i < n; i++) {
            char type[10];
            int x, y;
            scanf("%s %d shares at %d", type, &x, &y);

            if (type[0] == 'b') {
                buyPrice[buyCount] = y;
                buyShares[buyCount] = x;
                buyCount++;
            } else {
                sellPrice[sellCount] = y;
                sellShares[sellCount] = x;
                sellCount++;
            }

            int bid, ask;

            while (1) {
                bid = -1;
                ask = -1;

                for (int j = 0; j < buyCount; j++) {
                    if (buyShares[j] > 0 && (bid == -1 || buyPrice[j] > buyPrice[bid])) {
                        bid = j;
                    }
                }

                for (int j = 0; j < sellCount; j++) {
                    if (sellShares[j] > 0 && (ask == -1 || sellPrice[j] < sellPrice[ask])) {
                        ask = j;
                    }
                }

                if (bid == -1 || ask == -1 || buyPrice[bid] < sellPrice[ask]) {
                    break;
                }

                int shares = buyShares[bid];

                if (sellShares[ask] < shares) {
                    shares = sellShares[ask];
                }

                buyShares[bid] -= shares;
                sellShares[ask] -= shares;
                stock = sellPrice[ask];
            }

            if (ask == -1) {
                printf("- ");
            } else {
                printf("%d ", sellPrice[ask]);
            }

            if (bid == -1) {
                printf("- ");
            } else {
                printf("%d ", buyPrice[bid]);
            }

            if (stock == -1) {
                printf("-\n");
            } else {
                printf("%d\n", stock);
            }
        }
    }

    return 0;
}
