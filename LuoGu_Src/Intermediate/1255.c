/*************************************************************************
	> File Name: 1255.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> URL: https://github.com/JK-Lix
	> Created Time: 2019年05月25日 星期六 20时53分25秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int arr[200005] = {0};

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int pre = 0, sum = 0, ans = arr[0];
    for(int i = 0; i < n ; i++) {
        sum += arr[i];
        if(sum - pre > ans) ans = sum - pre;
        if(pre > sum) pre = sum;
    }
    printf("%d\n", ans);
    return 0;
}
