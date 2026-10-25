#include <stdio.h>

long long countWays(int n) {
    if (n <= 0) return 0;
    if (n == 1 || n == 2) return 1;
    if (n == 3) return 2;

    long long w1 = 1; 
    long long w2 = 1;
    long long w3 = 2; 
    long long current = 0;

    for (int i = 4; i <= n; i++) {
        current = w3 + w1; // ways(i) = ways(i-1) + ways(i-3)
        w1 = w2;
        w2 = w3;
        w3 = current;
    }

    return w3;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%lld\n", countWays(n));
    }
    return 0;
}