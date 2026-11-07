
#include <stdio.h>

int main() {
    int n, prime = 1;

    scanf("%d", &n);

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }

    printf("%d\n", prime);

    return 0;
}
