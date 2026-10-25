#include <stdio.h>

void function(int n) {
    int count = 0;
    
    
    int i = 1; count++; 
    int s = 1; count++; 

    
    count++; 
    while(s <= n) {
        i++;    count++; 
        s += i; count++; 
        
        count++; 
    }
    
    
    printf("%d\n", count);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        function(n);
    }
    return 0;
}
