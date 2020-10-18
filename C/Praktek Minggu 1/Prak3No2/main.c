#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f, g, uang, sisa;
    int q = 100000, w = 50000, i = 20000, r = 10000, t = 5000, y = 2000, u = 1000;
    printf("Masukkan nilai ");scanf("%d", &uang);
    a = uang/q;
    sisa = uang - (a*q);
    b = sisa/w;
    sisa = sisa - (b*w);
    c = sisa/i;
    sisa = sisa - (c*i);
    d = sisa/r;
    sisa = sisa - (d*r);
    e = sisa/t;
    sisa = sisa - (e*t);
    f = sisa/y;
    sisa = sisa - (f*y);
    g = sisa/u;
    sisa = sisa - (g*u);
    printf("Uang terdiri dari \n");
    printf("%d Lembar 100k\n", a);
    printf("%d Lembar 50k\n", b);
    printf("%d Lembar 20k\n", c);
    printf("%d Lembar 10k\n", d);
    printf("%d Lembar 5k\n", e);
    printf("%d Lembar 2k\n", f);
    printf("%d Lembar 1k\n", g);
    printf("sisa %d\n", sisa);
    return 0;
}
