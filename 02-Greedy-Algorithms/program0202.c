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
    int n, m;
    
    if (scanf("%d", &n) != 1) return 0;
    
    int *g = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &g[i]);
    }
    
    if (scanf("%d", &m) != 1) {
        free(g);
        return 0;
    }
    
    int *s = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        scanf("%d", &s[i]);
    }
    
    qsort(g, n, sizeof(int), compare);
    qsort(s, m, sizeof(int), compare);
    
    int i = 0;
    int j = 0;
    
    while (i < n && j < m) {
        if (s[j] >= g[i]) {
            i++;
        }
        j++;
    }
    
    printf("%d\n", i);
    
    free(g);
    free(s);
    
    return 0;
}