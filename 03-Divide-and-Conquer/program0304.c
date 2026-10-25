#include <stdio.h>

int findPair(int arr[], int left, int right, int x)
{
    if (left >= right)
        return 0;

    int sum = arr[left] + arr[right];

    if (sum == x)
    {
        printf("%d\n%d", arr[left], arr[right]);
        return 1;
    }

    if (sum > x)
        return findPair(arr, left, right - 1, x);

    return findPair(arr, left + 1, right, x);
}

int main()
{
    int n, x;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    if (!findPair(arr, 0, n - 1, x))
        printf("No");

    return 0;
}