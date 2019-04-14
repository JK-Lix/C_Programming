/*************************************************************************
	> File Name: p2676.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年04月06日 星期六 18时32分18秒
 ************************************************************************/

#include<stdio.h>
#define swap(a, b) {\
                   __typeof(a) __temp = a;\
                   a = b; b = __temp;\
                   }

void quickSort (int *num, int l, int r) {
    while(l < r) {
        int x = l, y = r, z = num[(l + r) >> 1];
        do {
            while (num[x] > z) x++;
            while (num[y] < z) y--;
            if (x <= y) {
                swap(num[x], num[y]);
                ++x, --y;
            }
        }while (x <= y);
        quickSort(num, x, r);
        r = y;
    }
    return;
}

int main() {
    int n, b, ans = 0, cnt = 0;
    scanf("%d %d", &n, &b);
    int a[n];
    for (int i = 0 ; i < n; i++) {
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, n - 1);
    for (int i = 0;ans <= b; i++) {
        ans += a[i];
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}
