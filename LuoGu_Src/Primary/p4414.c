/************************************************************************
    > File Name: p4414.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年04月06日 星期六 17时29分02秒
*************************************************************************/

#include<stdio.h>

#define num(x) a[c[x] - 'A']
#define swap(y, z) { \
                   __typeof(y) __temp = y;\
                   y = z; z = __temp;\
                   }

void sort(int *a) {
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }
}

int main() {
    int a[3] = {0};
    char c[4] = {0};
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    scanf("%s", c);
    sort(a);
    printf("%d %d %d", num(0), num(1), num(2));
    return 0;
}
