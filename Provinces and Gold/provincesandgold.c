#include <stdio.h>

int main() {
    int G, S, C;
    scanf("%d %d %d", &G, &S, &C);

    int power = 3 * G + 2 * S + C;

    if (power >= 8) {
        if (power >= 6) {
            printf("Province or Gold");
        } else if (power >= 3) {
            printf("Province or Silver");
        } else {
            printf("Province or Copper");
        }
    } else if (power >= 5) {
        if (power >= 6){
            printf("Duchy or Gold");
        } else if (power >= 3) {
            printf("Duchy or Silver");
        } else {
            printf("Duchy or Copper");
        }
    } else if (power >= 2) {
        if (power >= 3) {
            printf("Estate or Silver");
        } else {
            printf("Estate or Copper");
        }
    } else {
        printf("Copper");
    }

    return 0;
}
