#include <stdio.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    int neededBottles;
    int totalNeededBottles = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &neededBottles);
        totalNeededBottles += neededBottles;
    }
    
    if (totalNeededBottles <= x) {
        printf("Jebb");
    } else {
        printf("Neibb");
    }
    
    return 0;
}
