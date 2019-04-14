/*************************************************************************
	> File Name: p1179.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年04月06日 星期六 18时21分07秒
 ************************************************************************/

#include<stdio.h>

int rcs(int n) {
    if (n / 10 == 0) { 
        if (n % 10 == 2) return 1;
        else return 0;
    }
    if (n % 10 == 2) return 1 + rcs(n / 10);
    else return rcs(n / 10);
}

int main() {
    int l, r, cnt = 0;
    scanf("%d %d", &l, &r);
    for (int i = l; i <= r; i++) {
        cnt += rcs(i);
    }
    printf("%d", cnt);
    return 0;
}
