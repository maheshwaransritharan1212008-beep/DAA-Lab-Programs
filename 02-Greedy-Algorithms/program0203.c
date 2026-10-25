#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

int main(){
    int n;
    scanf("%d", &n);
    int c[n];
    for(int i=0;i<n;i++){
        scanf("%d", &c[i]);
    }
    qsort(c,n,sizeof(int), cmp);
    long long distance = 0;
    long long power = 1;
    for(int i=0; i<n; i++){
        distance+=c[i]*power;
        power*=n;
    }
    printf("%lld\n", distance);
    return 0;
}