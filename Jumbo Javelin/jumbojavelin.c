#include <stdio.h>

int main() {
    int N, l;
    scanf("%d", &N);
    
    int javelinLen = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &l);
        javelinLen += l;
    }
    
    printf("%d", javelinLen - (N - 1));
    return 0;
}
