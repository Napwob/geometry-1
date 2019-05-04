#include <stdio.h>
#include <stdlib.h>
void inputOkr()
{
    double p, s int m, n, r;
    printf("input parametrs(m,n,r)(cherez probel)");
    scanf("%d %d %d", &m, &n, &r);
    printf("circle( %d , %d , %d )", m, n, r);
    p = POkr(r);
    s = SOkr(r);
}
double POkr(int r)
{
    double pi = 3.14;
    return 2 * pi * r;
}
double SOkr(int r)
{
    double pi = 3.14;
    return pi * r * r;
}

