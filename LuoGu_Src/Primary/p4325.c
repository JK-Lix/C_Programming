/*************************************************************************
	> File Name: lg3.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年03月30日 星期六 10时51分31秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int num[42] = {0};
    int temp;
    int count = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &temp);
        if (!num[temp % 42]) {
            num[temp % 42] = 1;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
