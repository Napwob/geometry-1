#include "func.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int flag = 0;
    printf("input flag");
    while (flag != 4) {
        while (1) {
            scanf("%d", &flag);
            if (flag == 1 || flag == 2 || flag == 3 || flag == 4)
                break;
            else
                printf("error");
        }
        if (flag == 1)
            outOkr();
        if (flag == 2)
            outTri();
        if (flag == 3)
            outPol();
    }
    return 0;
}
