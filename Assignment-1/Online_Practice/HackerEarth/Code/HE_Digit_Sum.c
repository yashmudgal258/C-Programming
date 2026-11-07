#include <stdio.h>

int main()
{
    int T, N;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);

        int last = N % 10;
        int first = N;

        while (first >= 10)
        {
            first = first / 10;
        }

        printf("%d\n", first + last);
    }

    return 0;
}