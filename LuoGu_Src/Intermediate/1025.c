/*************************************************************************
	> File Name: 1025.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> URL: https://github.com/JK-Lix
	> Created Time: 2019年05月25日 星期六 19时41分50秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<inttypes.h>

int n,k,f[201][7]; 
int main(){
    scanf("%d%d", &n, &k);
    for (int i=1;i<=n;i++) {
        f[i][1]=1;
        f[i][0]=1;
    }
    for (int i = 1; i <= n; i++) f[1][i] = f[0][i] = 1;
    for (int x=2;x<=k;x++) {
        f[1][x]=0;
        f[0][x]=0;
    }
    for (int i=2;i<=n;i++) {
        for (int x = 2; x <= k; x++)
            if (i > x) f[i][x] = f[i-1][x-1] + f[i-x][x];
            else f[i][x] = f[i-1][x-1];
    }
    printf("%d\n", f[n][k]);
    return 0;
}

