#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n1;
        scanf("%d", &n1);
        int a1[n1];
        for (int i = 0; i < n1; i++) {
            scanf("%d", &a1[i]);
        }
        
        int n2;
        scanf("%d", &n2);
        int a2[n2];
        for (int i = 0; i < n2; i++) {
            scanf("%d", &a2[i]);
        }
        
        int i = 0, j = 0;
        int first = 1;
        while (i < n1 && j < n2) {
            if (a1[i] == a2[j]) {
                if (!first) printf(" ");
                printf("%d", a1[i]);
                first = 0;
                i++;
                j++;
            } else if (a1[i] < a2[j]) {
                i++;
            } else {
                j++;
            }
        }
        printf("\n");
    }
    return 0;
}