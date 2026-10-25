#include <stdio.h>
#include <stdlib.h>

int findFloor(int arr[], int low, int high, int x, int current_floor) {
    if (low > high) {
        return current_floor;
    }
    
    int mid = low + (high - low) / 2;
    
    if (arr[mid] == x) {
        return arr[mid];
    }
    
    if (arr[mid] < x) {
        return findFloor(arr, mid + 1, high, x, arr[mid]);
    } else {
        return findFloor(arr, low, mid - 1, x, current_floor);
    }
}

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) return 0;
    
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int x;
    if (scanf("%d", &x) != 1) {
        free(arr);
        return 0;
    }
    
    printf("%d\n", findFloor(arr, 0, n - 1, x, -1));
    
    free(arr);
    return 0;
}