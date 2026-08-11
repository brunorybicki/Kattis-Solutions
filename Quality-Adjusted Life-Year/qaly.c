#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    double q[1000];
    double y[1000];
    
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &q[i], &y[i]);
    }
    
    double qualy = q[0] * y[0];
    
    for (int i = 1; i < n; i++) {
        qualy += q[i] * y[i];
    }
    
    printf("%f", qualy);
    return 0;
}