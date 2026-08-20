#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int stragglers = 0;

    for (int i = 0; i < N; i++) {
        char type[4], direction[4];
        int number;
        scanf("%s %s %d", type, direction, &number);

        if (direction[0] == 'I') {
            stragglers += number;
        } else {
            stragglers -= number;
        }
    }

    if (stragglers == 0) {
        printf("NO STRAGGLERS");
    } else {
        printf("%d", stragglers);
    }
    
    return 0;
}
