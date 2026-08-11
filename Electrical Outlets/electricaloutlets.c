#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int K;
        scanf("%d", &K);
        
        int result = 1;

        for (int j = 0; j < K; j++) {
            int O;
            scanf("%d", &O);

            result += O - 1;
        }

        printf("%d\n", result);
    }

    return 0;
}
