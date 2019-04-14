/*************************************************************************
	> File Name: lg3.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年03月30日 星期六 10时51分31秒
 ************************************************************************/
#include<stdio.h>

int gcd(int a, int b) {
    if (a == 0 || b == 0) return (a > b ? a : b);
    return gcd((a > b ? a : b) % (a < b ? a : b), (a < b ? a : b));
}

int main() {
    int a, b, c, n, m;
    scanf("%d %d %d", &a, &b, &c);
    n = (a < b ? (a < c ? a : c) : (b < c ? b : c));
    m = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    int g = gcd(n, m);
    printf("%d/%d", n / g, m / g);
    return 0;
}
