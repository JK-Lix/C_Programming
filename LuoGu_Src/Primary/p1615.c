/*************************************************************************
	> File Name: p1615.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年04月06日 星期六 16时04分52秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int a[3], b[3];
    long long n;
    scanf("%d:%d:%d", &a[0], &a[1], &a[2]);
    scanf("%d:%d:%d", &b[0], &b[1], &b[2]);
    scanf("%lld", &n);
    printf("%lld", ((b[0] - a[0]) * 60 * 60 + (b[1] - a[1]) * 60 + b[2] - a[2]) * n);
    return 0;
}
