#include <stdio.h>

int main() {
    char t[4];
    scanf("%c%c", &t[0], &t[1]);
    scanf(" %c%c", &t[2], &t[3]);

    int start[4];
    for (int i = 0; i < 4; i++) {
        if (t[i] == '-') start[i] = 0;
        else start[i] = t[i] - '0';
    }

    int goal = 1230;
    int queue[30], qdist[30];
    int visited[10000];
    int front = 0, back = 0;

    for (int i = 0; i < 10000; i++) visited[i] = 0;

    int s = start[0]*1000 + start[1]*100 + start[2]*10 + start[3];
    queue[back] = s;
    qdist[back] = 0;
    back++;
    visited[s] = 1;

    // neighbors[i] = positions the empty can swap with from position i
    int neighbors[4][2] = {{1,2},{0,3},{0,3},{1,2}};

    while (front < back) {
        int cur = queue[front];
        int d = qdist[front];
        front++;

        if (cur == goal) {
            printf("%d", d);
            return 0;
        }

        int a[4];
        a[0] = cur / 1000;
        a[1] = (cur / 100) % 10;
        a[2] = (cur / 10) % 10;
        a[3] = cur % 10;

        int empty = 0;
        for (int i = 0; i < 4; i++) {
            if (a[i] == 0) empty = i;
        }

        for (int n = 0; n < 2; n++) {
            int sw = neighbors[empty][n];
            int b[4];
            for (int i = 0; i < 4; i++) b[i] = a[i];
            b[empty] = b[sw];
            b[sw] = 0;

            int ns = b[0]*1000 + b[1]*100 + b[2]*10 + b[3];
            if (visited[ns] == 0) {
                visited[ns] = 1;
                queue[back] = ns;
                qdist[back] = d + 1;
                back++;
            }
        }
    }

    return 0;
}