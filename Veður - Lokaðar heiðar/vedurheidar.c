#include <stdio.h>

int main(){
    int v, n;
    scanf("%d", &v);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char s[100];
        int k;

        scanf("%s %d", s, &k);

        if (v <= k) {
            printf("%s opin\n", s);
        } else {
            printf("%s lokud\n", s);
        }
    }

    return 0;
}
