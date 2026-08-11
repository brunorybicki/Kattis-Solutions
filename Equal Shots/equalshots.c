#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int shot1 = 0;
    int shot2 = 0;
    
    int v, c;
    
    for (int i = 0; i < a; i++) {
        scanf("%d %d", &v, &c);
        shot1 += v * c;
    }
    
    for (int i = 0; i < b; i++) {
        scanf("%d %d", &v, &c);
        shot2 += v * c;
    }

    if (shot1 == shot2) {
        printf("same\n");
    } else {
        printf("different\n");
    }

    return 0;
}
