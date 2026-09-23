#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char locations[10000][101];
    int counts[10000], distinct = 0;

    for (int i = 0; i < N; i++) {
        char name[101], location[101];
        scanf("%s", name);
        scanf("%s", location);

        int found = -1;

        for (int j = 0; j < distinct; j++) {
            if (strcmp(locations[j], location) == 0) {
                found = j;
                break;
            }
        }

        if (found == -1) {
            strcpy(locations[distinct], location);
            counts[distinct] = 1;
            distinct++;
        } else {
            counts[found]++;
        }
    }

    for (int i = 0; i < distinct; i++) {
        printf("%s %d\n", locations[i], counts[i]);
    }

    return 0;
}
