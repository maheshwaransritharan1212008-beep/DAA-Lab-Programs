#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int count[n + 1];
    for (int i = 0; i <= n; i++) {
        count[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        count[x]++;
        if (count[x] == 2) {
            printf("%d\n", x);
            break;
        }
    }
    
    return 0;
}