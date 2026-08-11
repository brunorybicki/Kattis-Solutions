#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];
    scanf("%s", s);

    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            printf("Nothing special about this string :(");
            return 0;
        }
        
        left++;
        right--;
    }

    printf("Palindrome!");
    return 0;
}
