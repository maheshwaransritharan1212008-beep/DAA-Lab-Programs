#include <stdio.h>
#include <stdlib.h>

int asc_cmp(const void *a, const void *b) {
    long long valA = *(const long long *)a;
    long long valB = *(const long long *)b;
    if (valA < valB) return -1;
    if (valA > valB) return 1;
    return 0;
}

int desc_cmp(const void *a, const void *b) {
    long long valA = *(const long long *)a;
    long long valB = *(const long long *)b;
    if (valA > valB) return -1;
    if (valA < valB) return 1;
    return 0;
}

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) return 0;
    
    long long *arr1 = (long long *)malloc(n * sizeof(long long));
    long long *arr2 = (long long *)malloc(n * sizeof(long long));
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr1[i]);
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr2[i]);
    }
    
    qsort(arr1, n, sizeof(long long), asc_cmp);
    qsort(arr2, n, sizeof(long long), desc_cmp);
    
    long long min_sum = 0;
    for (int i = 0; i < n; i++) {
        min_sum += arr1[i] * arr2[i];
    }
    
    printf("%lld\n", min_sum);
    
    free(arr1);
    free(arr2);
    
    return 0;
}