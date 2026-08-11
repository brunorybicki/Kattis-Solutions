#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int knotsToLearn[1001];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &knotsToLearn[i]);
    }
    
    int knotsLearned[1001];
    
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &knotsLearned[i]);
    }
    
    int numOfKnotsToLearn = 0;
    
    for (int i = 0; i < n; i++) {
        numOfKnotsToLearn += knotsToLearn[i];
    }
    
    int numOfKnotsLearned = 0;
    
    for (int i = 0; i < n; i++) {
        numOfKnotsLearned += knotsLearned[i];
    }
    
    printf("%d", numOfKnotsToLearn - numOfKnotsLearned);
    return 0;
}
