/*************************************************************************
	> File Name: lg3.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年03月30日 星期六 10时51分31秒
 ************************************************************************/


#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int temp, count = 1, ans = 1, cnt = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (i == 0) {
            cnt = temp;
            continue;
        }
        cnt++;
        if (temp == cnt) {
            count++;
            if (count > ans) ans = count;
        } else {
            count = 1;
            cnt = temp;
        }
    }
    printf("%d", ans);
    return 0;
}
