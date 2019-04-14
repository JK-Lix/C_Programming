/*************************************************************************
    > File Name: p1044.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> URL: https://github.com/JK-Lix
	> Created Time: 2019年04月14日 星期日 15时27分40秒
 ************************************************************************/

/* Tips 1 : 问题转化为：求n对括号的合法序列数  （时间复杂度高）
 * 
 * Tips 2 : f(n)代表n个元素出栈后的合法序列数，f(n)=f(x - 1)*f(n - x)的求和，
 *          f(0) = 1
 *          f(1) = 1
 *          f(2) = 2
 */

#include<stdio.h>
#include<stdlib.h>

int fa(int n) {
    int ans = 0;
    if (n <= 1) return 1;
    for (int i = 1; i <= n; i++) {
        ans += fa(i - 1) * fa(n - i);
    }
    return ans;
}

int main() {
    int n;
    scanf("%d", &n);
    int ans = fa(n);
    printf("%d", ans);
    return 0;
}
