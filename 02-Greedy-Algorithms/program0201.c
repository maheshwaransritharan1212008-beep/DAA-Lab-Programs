#include <stdio.h>

int main() {
    int V;
    scanf("%d", &V);
    
    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int count = 0;
    
    for (int i = 0; i < 9; i++) {
        if (V >= denominations[i]) {
            count += V / denominations[i];
            V = V % denominations[i];
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}