#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int result = 0;
    
    for (int i = 0; i < 12; i++) {
        result += n;
        printf("%d\n", result);
    }

    return 0;
}
