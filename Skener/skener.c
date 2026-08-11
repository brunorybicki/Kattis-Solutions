#include <stdio.h>

int main() {
    int R, C, Zr, Zc;
    scanf("%d %d %d %d", &R, &C, &Zr, &Zc);
    
    char row[50];
    
    for (int i = 0; i < R; i++) {
        scanf("%s", row);

        for (int j = 0; j < Zr; j++) {
            for (int k = 0; k < C; k++) {
                for (int l = 0; l < Zc; l++) {
                    printf("%c", row[k]);
                }
            }

            printf("\n");
        }
    }
    
    return 0;
}
