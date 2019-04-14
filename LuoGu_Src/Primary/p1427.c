/*************************************************************************
	> File Name: lg3.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年03月30日 星期六 10时51分31秒
 ************************************************************************/


#include <stdio.h>

int main() {
    int a[100] = {0}, i = 0;
    while (scanf("%d", &a[i++])) {
        if (a[i - 1] == 0) break;
    }
    i--;
    printf("%d", a[--i]);
    for (int j = --i; j >= 0; j--) {
        printf(" %d",a[j]);
    }
    return 0;
}
