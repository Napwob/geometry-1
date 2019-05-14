#ifndef FUNC_GUARD
#define FUNC_GUARD
float POkr(int r);
float SOkr(int r);
float triangleP(int xt1, int yt1, int xt2, int yt2, int xt3, int yt3);
float triangleS(int xt1, int yt1, int xt2, int yt2, int xt3, int yt3);
float polygonS(
        int px1, int py1, int px2, int py2, int px3, int py3, int px4, int py4);
float polygonP(
        int px1, int py1, int px2, int py2, int px3, int py3, int px4, int py4);
int peres(int x1, int y1, int r1, int x2, int y2, int r2);
#endif
