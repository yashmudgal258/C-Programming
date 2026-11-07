#include <stdio.h>

int main(void)
{
    int N;
    char S[16];

    scanf("%d", &N);
    scanf("%15s", S);

    printf("%d\n", N * 2);
    printf("%s\n", S);

    return 0;
}