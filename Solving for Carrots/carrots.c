#include <stdio.h>

int main() {
    int N, P;
    scanf("%d %d", &N, &P);
    
    char word[1000][1000];
    
    for (int i = 0; i < N; i++) {
        scanf("%s", &word[i]);
    }
    
    printf("%d", P);
    return 0;
}
