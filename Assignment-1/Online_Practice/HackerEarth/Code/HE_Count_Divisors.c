#include <stdio.h>

int main() {
    int l, r, k;

    scanf("%d %d %d", &l, &r, &k);

    int count = (r / k) - ((l - 1) / k);

    printf("%d\n", count);

    return 0;
}