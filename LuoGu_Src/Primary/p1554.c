/*************************************************************************
	> File Name: lg3.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年03月30日 星期六 10时51分31秒
 ************************************************************************/

#include<stdio.h>

int ans[10] = {0};

void get(int x) {
    if (x == 0) return;
    ans[x % 10]++;
    x /= 10;
    get(x);
}

int main() {
    int m ,n;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++) {
        get(i);   
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", ans[i]);
    }
    return 0;
}
