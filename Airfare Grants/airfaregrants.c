#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int minPrice = 1000000, maxPrice = 0;

    for (int i = 0; i < n; i++) {
        int p;
        scanf("%d", &p);

        if (p < minPrice) {
            minPrice = p;
        }
        if (p > maxPrice) {
            maxPrice = p;
        }
    }

    int reimbursed;
    
    if (minPrice < maxPrice / 2) {
        reimbursed = minPrice;
    } else {
        reimbursed = maxPrice / 2;
    }

    printf("%d", minPrice - reimbursed);
    return 0;
}
