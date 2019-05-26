/*************************************************************************
	> File Name: 1028.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> URL: https://github.com/JK-Lix
	> Created Time: 2019年05月25日 星期六 20时05分21秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<inttypes.h>

int n;
int f[1005];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i / 2; j++) {
            f[i] += f[j];
        }
        f[i]++;
    }
    printf("%d", f[n]);
    return 0;
}
