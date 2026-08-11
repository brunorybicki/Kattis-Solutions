#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N, T;
    scanf("%d %d", &N, &T);

    int t[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &t[i]);
    }

    qsort(t, N, sizeof(int), cmp);

    int ok = 1;
    for (int i = 0; i < N; i++) {
        if (t[i] <= (long long)i * T) {
            ok = 0;
            break;
        }
    }

    if (ok) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}