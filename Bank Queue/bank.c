#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int c, t;
} Person;

int parent[10001];

int compareByValue(const void *a, const void *b) {
    const Person *pa = a;
    const Person *pb = b;
    
    if (pa->c > pb->c) {
        return -1;
    } else if (pa->c < pb->c) {
        return 1;
    } else {
        return 0;
    }
}

int find(int x) {
    while (parent[x] != x) {
        parent[x] = parent[parent[x]];
        x = parent[x];
    }

    return x;
}

int main() {
    int n, T;
    scanf("%d %d", &n, &T);

    Person people[10000];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &people[i].c, &people[i].t);
    }

    qsort(people, n, sizeof(Person), compareByValue);

    for (int i = 0; i <= T; i++) {
        parent[i] = i;
    }

    long long total = 0;

    for (int i = 0; i < n; i++) {
        int wanted = people[i].t + 1, slot = find(wanted);

        if (slot > 0) {
            total += people[i].c;
            parent[slot] = slot - 1;
        }
    }

    printf("%lld\n", total);

    return 0;
}
