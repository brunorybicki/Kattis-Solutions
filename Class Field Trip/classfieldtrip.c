#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%[^\n]", a);
    getchar();
    scanf("%[^\n]", b);
    
    char merge[201];
    int lengthA = strlen(a), lengthB = strlen(b), i = 0, j = 0, k = 0;

    while (i < lengthA && j < lengthB) {
        if (a[i] <= b[j]) {
            merge[k] = a[i];
            i++;
        } else {
            merge[k] = b[j];
            j++;
        }
        
        k++;
    }

    while (i < lengthA) {
        merge[k] = a[i];
        i++;
        k++;
    }

    while (j < lengthB) {
        merge[k] = b[j];
        j++;
        k++;
    }
    
    merge[k] = '\0';
    printf("%s", merge);
    return 0;
}
