#include "func.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int flag = 0;
    float per, plos;
    int m, n, r, xt1, yt1, xt2, yt2, xt3, yt3, px1, py1, px2, py2, px3, py3,
            px4, py4, x1, y1, r1, x2, y2, r2;
    printf("input flag");
    while (flag != 4) {
        while (1) {
            scanf("%d", &flag);
            if (flag == 1 || flag == 2 || flag == 3 || flag == 4 || flag == 5)
                break;
            else
                printf("error");
        }
        if (flag == 1) {
            printf("input parametrs(m,n,r)(cherez probel)");
            scanf("%d %d %d", &m, &n, &r);
            per = POkr(r);
            plos = SOkr(r);
            printf("circle( %d , %d , %d ):P=%6.2f,S=%6.2f",
                   m,
                   n,
                   r,
                   per,
                   plos);
        }
        if (flag == 2) {
            printf("\ninput parametrs(xt1,yt1,xt2,yt2,xt3,yt3)(cherez probel)");
            scanf("%d %d %d %d %d %d", &xt1, &yt1, &xt2, &yt2, &xt3, &yt3);
            per = triangleP(xt1, yt1, xt2, yt2, xt3, yt3);
            plos = triangleS(xt1, yt1, xt2, yt2, xt3, yt3);
        }

        if (flag == 3) {
            printf("\ninput parametrs(px1,py1,px2,py2,px3,py3,px4,py4)(cherez "
                   "probel)");
            scanf("%d %d %d %d %d %d %d %d",
                  &px1,
                  &py1,
                  &px2,
                  &py2,
                  &px3,
                  &py3,
                  &px4,
                  &py4);
            per = polygonP(px1, py1, px2, py2, px3, py3, px4, py4);
            plos = polygonS(px1, py1, px2, py2, px3, py3, px4, py4);
        }
        if (flag == 5) {
            printf("(Peresechenie) input parametrs(m,n,r)(cherez probel): ");
            scanf("%d %d %d", &x1, &y1, &r1);
            scanf("%d %d %d", &x2, &y2, &r2);
            peres(x1, y1, r1, x2, y2, r2);
        }
    }
    return 0;
}
