#include <stdio.h>
#include <stdlib.h>

int findFirstZero(int arr[], int low, int high) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        
        if ((mid == 0 || arr[mid - 1] == 1) && arr[mid] == 0) {
            return mid;
        }
        
        if (arr[mid] == 1) {
            return findFirstZero(arr, mid + 1, high);
        } else {
            return findFirstZero(arr, low, mid - 1);
        }
    }
    return -1;
}

int countZeroes(int arr[], int n) {
    int firstZeroIndex = findFirstZero(arr, 0, n - 1);
    
    if (firstZeroIndex == -1) {
        return 0;
    }
    
    return n - firstZeroIndex;
}

int main() {
    int m;
    
    if (scanf("%d", &m) != 1) return 0;
    
    int *arr = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("%d\n", countZeroes(arr, m));
    
    free(arr);
    return 0;
}