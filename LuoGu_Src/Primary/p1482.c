/*************************************************************************
	> File Name: p1482.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年04月06日 星期六 15时40分12秒
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    if (a == 0 || b == 0) return (a > b ? a : b);
    return gcd((a > b ? a : b) % (a < b ? a : b), (a < b ? a : b));
}

int main() {
    int _n[2], _m[2], g, n, m;
    scanf("%d/%d", &_n[0], &_m[0]);
    scanf("%d/%d", &_n[1], &_m[1]);
    m = _m[0] * _m[1];
    n = _n[0] * _n[1];
    g = gcd(m, n);
    printf("%d %d", m / g, n / g);
    return 0;
}
