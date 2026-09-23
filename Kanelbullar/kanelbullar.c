#include <stdio.h>

int main() {
    int fr, yr, br, mr, sr;
    scanf("%d", &fr);
    scanf("%d", &yr);
    scanf("%d", &br);
    scanf("%d", &mr);
    scanf("%d", &sr);

    int f, y, b, m, s;
    scanf("%d", &f);
    scanf("%d", &y);
    scanf("%d", &b);
    scanf("%d", &m);
    scanf("%d", &s);

    int cinnamonBuns = f / fr;

    if ((y / yr) < cinnamonBuns) {
        cinnamonBuns = y / yr;
    }

    if ((b / br) < cinnamonBuns) {
        cinnamonBuns = b / br;
    }

    if ((m / mr) < cinnamonBuns) {
        cinnamonBuns = m / mr;
    }

    if ((s / sr) < cinnamonBuns) {
        cinnamonBuns = s / sr;
    }

    printf("%d\n", cinnamonBuns);
    return 0;
}
