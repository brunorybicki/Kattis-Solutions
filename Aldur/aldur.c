#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int friends[1000];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &friends[i]);
    }
    
    int youngest = friends[0];
    
    for (int i = 1; i < n; i++) {
        if (friends[i] < youngest) {
            youngest = friends[i];
        }
    }
    
    printf("%d", youngest);
    return 0;
}