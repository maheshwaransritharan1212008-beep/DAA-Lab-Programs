#include <stdio.h>

void Factor(int num) {
    int count = 0;
    int i;
    
    for (i = 1; count++, i <= num; ++i) {
        count++;
        if (num % i == 0) {
            count++;
        }
    }
    
    printf("%d\n", count);
}

int main() {
    int n;
    
    scanf("%d", &n); 
    Factor(n);
    
    return 0;
}