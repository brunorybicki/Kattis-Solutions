#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    double base = 0;
    double numOfBases = 0;
    double officialBases = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%lf", &base);
        
        if (base != -1) {
            numOfBases += base;
            officialBases++;
        }
    }
    
    printf("%lf", numOfBases / officialBases);
    return 0;
}
