#include <stdio.h>
#include <stdlib.h>

long long getMaxMonetaryPath(int n, int **grid) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                continue; 
            } else if (i == 0) {
                grid[i][j] += grid[i][j - 1]; 
            } else if (j == 0) {
                grid[i][j] += grid[i - 1][j]; 
            } else {
                int max_prev = (grid[i - 1][j] > grid[i][j - 1]) ? grid[i - 1][j] : grid[i][j - 1];
                grid[i][j] += max_prev;
            }
        }
    }
    
    return grid[n - 1][n - 1];
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int **grid = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        grid[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    long long result = getMaxMonetaryPath(n, grid);
    printf("%lld\n", result);

    for (int i = 0; i < n; i++) {
        free(grid[i]);
    }
    free(grid);

    return 0;
}