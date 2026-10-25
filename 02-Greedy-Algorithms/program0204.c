#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int valA = *(const int *)a;
    int valB = *(const int *)b;
    if (valA < valB) return -1;
    if (valA > valB) return 1;
    return 0;
}

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) return 0;
    
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, n, sizeof(int), compare);
    
    long long max_sum = 0;
    for (int i = 0; i < n; i++) {
        max_sum += (long long)arr[i] * i;
    }
    
    printf("%lld\n", max_sum);
    
    free(arr);
    return 0;
}