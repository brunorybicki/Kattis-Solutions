#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a > 90 || b > 90 || c > 90) {
        printf("Trubbig Triangel");
    } else if ( a < 90 && b < 90 && c < 90) {
        printf("Spetsig Triangel");
    } else {
        printf("Ratvinklig Triangel");
    }
    
    return 0;
}