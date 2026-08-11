#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);

    int numOfSquares = 1;

    for (int i = 0; i < N; i++) {
        numOfSquares *= 2;
    }

    int sidePoints = numOfSquares + 1;
    int totalPoints = pow(sidePoints, 2);

    printf("%d", totalPoints);
    return 0;
}
