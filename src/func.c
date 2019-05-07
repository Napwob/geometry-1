#include "func.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void outOkr()
{
    double p, s;
    int m, n, r;
    printf("input parametrs(m,n,r)(cherez probel)");
    scanf("%d %d %d", &m, &n, &r);
    p = POkr(r);
    s = SOkr(r);
    printf("circle( %d , %d , %d ):P=%6.2f,S=%6.2f", m, n, r, p, s);
}
void outTri()
{
    int xt1, yt1, xt2, yt2, xt3, yt3;
    printf("\ninput parametrs(xt1,yt1,xt2,yt2,xt3,yt3)(cherez probel)");
    scanf("%d %d %d%d%d%d", &xt1, &yt1, &xt2, &yt2, &xt3, &yt3);
    triangle(xt1, yt1, xt2, yt2, xt3, yt3);
}
void outPol()
{
    int px1, py1, px2, py2, px3, py3, px4, py4;
    printf("\ninput parametrs(px1,py1,px2,py2,px3,py3,px4,py4)(cherez probel)");
    scanf("%d %d %d %d %d %d %d %d",
          &px1,
          &py1,
          &px2,
          &py2,
          &px3,
          &py3,
          &px4,
          &py4);
    polygon(px1, py1, px2, py2, px3, py3, px4, py4);
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
void triangle(int xt1, int yt1, int xt2, int yt2, int xt3, int yt3)
{
    float p, plosh, perim, str1, str2, str3;
    str1 = sqrt(pow(xt2 - xt1, 2) + pow(yt2 - yt1, 2));
    str2 = sqrt(pow(xt3 - xt1, 2) + pow(yt3 - yt1, 2));
    str3 = sqrt(pow(xt3 - xt2, 2) + pow(yt3 - yt2, 2));
    p = (str1 + str2 + str3) / 2;
    perim = str1 + str2 + str3;
    plosh = sqrt(p * (p - str1) * (p - str2) * (p - str3));
    printf("Plosh=%.2f\n", plosh);
    printf("Perim=%.2f\n", perim);
    return;
}
void polygon(
        int px1, int py1, int px2, int py2, int px3, int py3, int px4, int py4)
{
    float ploshs = 0, perims = 0, str1 = 0, str2 = 0, str3 = 0, str4 = 0;
    ploshs = abs((px1 * py2) + (px2 * py3) + (px3 * py4) + (px4 * py1)
                 - (px2 * py1) - (px3 * py2) - (px4 * py3) - (px1 * py4))
            / 2;
    str1 = sqrt(pow(px2 - px1, 2) + pow(py2 - py1, 2));
    str2 = sqrt(pow(px3 - px2, 2) + pow(py3 - py2, 2));
    str3 = sqrt(pow(px4 - px3, 2) + pow(py4 - py3, 2));
    str4 = sqrt(pow(px1 - px4, 2) + pow(py1 - py4, 2));
    perims = str1 + str2 + str3 + str4;
    printf("Plosh=%.2f\n", ploshs);
    printf("Perim=%.2f\n", perims);
    return;
}
