#include <stdio.h>

void function(int n) {
    int count = 0;
    int c = 0;
    int i, j, k;

    count++; 

    for (i = n / 2; count++, i < n; i++) {
        for (j = 1; count++, j < n; j = 2 * j) {
            for (k = 1; count++, k < n; k = k * 2) {
                count++;
                c++;
            }
        }
    }
    
    printf("%d\n", count);
}

int main() {
    int n;
    
    scanf("%d", &n);
    function(n);
    
    return 0;
}