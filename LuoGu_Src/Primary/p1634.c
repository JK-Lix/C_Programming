/*************************************************************************
	> File Name: lg3.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年03月30日 星期六 10时51分31秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    long long sum = 1;
    for (int i = 0; i < n; i++) {
        sum += sum * x;
    }
    printf("%lld", sum);
    return 0;
}
