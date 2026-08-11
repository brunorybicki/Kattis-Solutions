#include <stdio.h>

int main() {
    int k, s;
    scanf("%d %d", &k, &s);
    
    printf("%d\n", s / k + s % k);
    return 0;
}
