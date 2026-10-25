#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int count[n + 1];
    for (int i = 0; i <= n; i++) {
        count[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        count[a[i]]++;
        if (count[a[i]] == 2) {
            printf("%d\n", a[i]);
            break;
        }
    }
    
    return 0;
}