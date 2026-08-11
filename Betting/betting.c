#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);
    
    printf("%.10f\n", 100.0 / p);
    printf("%.10f\n", 100.0 / (100 - p));
    return 0;
}
