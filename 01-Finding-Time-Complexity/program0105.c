#include <stdio.h>

void reverse(int n) {
    int count = 0;
    int rev = 0, remainder;
    
    count++;
    
    while (count++, n != 0) {
        count++;
        remainder = n % 10;
        count++;
        rev = rev * 10 + remainder;
        count++;
        n /= 10;
    }
    
    count++;
    
    printf("%d\n", count);
}

int main() {
    int n;
    
    scanf("%d", &n);
    reverse(n);
    
    return 0;
}