/*************************************************************************
	> File Name: 1057.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> URL: https://github.com/JK-Lix
	> Created Time: 2019年05月25日 星期六 20时21分49秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<inttypes.h>

int f[35][35];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    f[0][1] = 1;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            f[i][j] = f[i -1][j - 1] +f[i - 1][j + 1];
            if (j == 1) f[i][j] += f[i - 1][n];
            if (j == n) f[i][j] += f[i - 1][1];
        }
    }
    printf("%d", f[m][1]);
    return 0;
}
