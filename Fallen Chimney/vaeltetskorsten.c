#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int max = -1;

    for (int j = 0; j < n; j++) {
        int i;
        char response[4];
        scanf("%d %s", &i, response);

        if (response[0] == 'n') {
            if (i > max) {
                max = i;
            }
        }
    }
    
    printf("%d", max);
    return 0;
}
