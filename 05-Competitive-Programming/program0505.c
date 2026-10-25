#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    int k;
    scanf("%d", &k);
    
    int i = 0, j = 1, found = 0;
    while (i < n && j < n) {
        int diff = A[j] - A[i];
        if (i != j && diff == k) {
            found = 1;
            break;
        } else if (diff < k || i == j) {
            j++;
        } else {
            i++;
        }
    }
    
    printf("%d\n", found);
    return 0;
}