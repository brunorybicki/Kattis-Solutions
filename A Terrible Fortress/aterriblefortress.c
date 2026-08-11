#include <stdio.h>

int main() {
    int n, b[1000];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    
    int numOfBlazes = 0;
    
    for (int i = 0; i < n; i++) {
        numOfBlazes += b[i];
    }
    
    printf("%d", numOfBlazes);
    return 0;
}
