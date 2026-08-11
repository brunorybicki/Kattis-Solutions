#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int sequence1[1000000];
    int sequence2[1000000];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequence1[i]);
    }
    
    for (int i = 0; i < m; i++) {
        scanf("%d", &sequence2[i]);
    }
    
    int sum1 = sequence1[0];
    
    for (int i = 1; i < n; i++) {
        sum1 += sequence1[i];
    }
    
    int sum2 = sequence2[0];
    
    for (int i = 1; i < m; i++) {
        sum2 += sequence2[i];
    }
    
    if (sum1 > sum2) {
        printf("Button 1");
    } else if (sum2 > sum1) {
        printf("Button 2");
    } else {
        printf("Oh no");
    }
    
    return 0;
}