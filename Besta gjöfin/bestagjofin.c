#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char bestName[21];
    char name[21];
    int bestFun = -1;
    int fun;

    for (int i = 0; i < n; i++) {
        scanf("%s %d", name, &fun);

        if (fun > bestFun) {
            bestFun = fun;
            int j = 0;
            
            while (name[j] != '\0') {
                bestName[j] = name[j];
                j++;
            }
            
            bestName[j] = '\0';
        }
    }

    printf("%s\n", bestName);
    return 0;
}
