#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char prev[6], curr[6];
    int hangovers = 0;
    
    scanf("%s", prev);
    
    for (int i = 1; i < n; i++) {
        scanf("%s", curr);
        
        if (strcmp(prev, "drunk") == 0 && strcmp(curr, "sober") == 0) {
            hangovers++;
        }
        
        strcpy(prev, curr);
    }
    
    printf("%d", hangovers);
    return 0;
}
