#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    int examScore;
    scanf("%d", &examScore);
    
    char examGrade;
    
    if (examScore >= a) {
        examGrade = 'A';
    } else if (examScore >= b) {
        examGrade = 'B';
    } else if (examScore >= c) {
        examGrade = 'C';
    } else if (examScore >= d) {
        examGrade = 'D';
    } else if (examScore >= e) {
        examGrade = 'E';
    } else {
        examGrade = 'F';
    }
    
    printf("%c", examGrade);
    return 0;
}
