#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    int n;
    scanf("%d", &n);

    int a;
    for (a = 1; a <= n; a = a + 1) {
        printf("%d %d %d\n", a, a*a, a*a*a);
        }

    return 0;
}