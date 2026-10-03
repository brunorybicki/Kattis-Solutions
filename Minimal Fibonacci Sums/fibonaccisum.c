#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, c;

    if (n == 0) {
        return a;
    } else if (n == 1) {
        return b;
    }

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    
    return b;
}

int maximumFibonacci(int n) {
    int i = 0;

    while (fibonacci(i + 1) <= n) {
        i++;
    }

    return fibonacci(i);
}

int main() {
    int n;
    scanf("%d", &n);

    int result[1001], resultIndex = 0;

    while (n > 0) {
        int maximumFibonacciNumber = maximumFibonacci(n);
        result[resultIndex++] = maximumFibonacciNumber;
        n -= maximumFibonacciNumber;
    }

    for (int i = resultIndex - 1; i >= 0; i--) {
        printf("%d ", result[i]);
    }

    printf("\n");
    
    return 0;
}
