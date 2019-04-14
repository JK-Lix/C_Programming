/*************************************************************************
	> File Name: p4445.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年04月06日 星期六 15时05分19秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    long long sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (i != 0) {
            sum += a[i] > a[i - 1] ? a[i] : a[i - 1];
        }
    }
    printf("%lld", sum);
    return 0;
}
