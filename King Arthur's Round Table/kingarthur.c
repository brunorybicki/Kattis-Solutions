#include <stdio.h>

int main() {
    double d, w;
    int n;
    scanf("%lf", &d);
    scanf("%lf", &w);
    scanf("%d", &n);
    
    if (3.14159 * d >= w * n) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}
