#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) return 0;
    
    int candidate = 0;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        
        if (count == 0) {
            candidate = num;
        }
        
        if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    printf("%d\n", candidate);
    
    return 0;
}