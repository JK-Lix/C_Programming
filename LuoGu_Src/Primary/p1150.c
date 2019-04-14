/*************************************************************************
	> File Name: p1423.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年04月06日 星期六 09时49分43秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int sss(int n, int k, int y) {
    if ((n + y) / k == 0) {
        return n;
    }
    if (n + y >= k) {
        return n + sss((n + y) / k, k, (n + y) % k);
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", n + sss(n/k, k, n % k));
    return 0;
}
