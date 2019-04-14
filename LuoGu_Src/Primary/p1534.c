/*************************************************************************
	> File Name: lg3.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年03月30日 星期六 10时51分31秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    int s, k;
    int mood = 0, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &s, &k);
        mood += s + k - 8;
        sum += mood;
    }
    printf("%d", sum);
    return 0;
}
