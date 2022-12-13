#include <stdio.h>
int main() {
    int i, N, sum=0;
    scanf("%d", &N);
    if (N <= 0)
    {
        for (i = 1; i >= N; i--)
        {
            sum += i;
        }
    } else {
        for (i = 1; i <= N; i++)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}