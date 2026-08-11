#include <stdio.h>
#include <math.h>

int main() {
    int N, W, H;
    scanf("%d %d %d", &N, &W, &H);

    double diagonal = sqrt(W * W + H * H);
    int length;

    for (int i = 0; i < N; i++) {
        scanf("%d", &length);

        if (length <= diagonal) {
            printf("DA\n");
        } else {
            printf("NE\n");
        }
    }

    return 0;
}
