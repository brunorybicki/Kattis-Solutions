#include <iostream>
#include <vector>

long long fibonacci(int n) {
    long long a = 0, b = 1, c;

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

long long maximumFibonacci(long long n) {
    int i = 0;

    while (fibonacci(i + 1) <= n) {
        i++;
    }

    return fibonacci(i);
}

int main() {
    long long n;
    std::cin >> n;

    std::vector<long long> result;

    while (n > 0) {
        long long maximumFibonacciNumber = maximumFibonacci(n);
        result.push_back(maximumFibonacciNumber);
        n -= maximumFibonacciNumber;
    }

    for (int i = result.size() - 1; i >= 0; i--) {
        std::cout << result[i];

        if (i > 0) {
            std::cout << " ";
        } else {
            std::cout << "\n";
        }
    }

    return 0;
}
