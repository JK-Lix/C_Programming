/*************************************************************************
	> File Name: lg3.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年03月30日 星期六 10时51分31秒
 ************************************************************************/


#include<stdio.h>

int main() {
    int n, i = 0;
    int stat = 0;
    scanf("%d", &n);
    for (i = 10000; i <= 30000; i++) {
        if ((i / 100) % n == 0) {
            if (((i / 10) % 1000) % n == 0) {
                if ((i % 1000) % n == 0) {
                    printf("%d\n", i);
                    if (!stat) stat = 1;
                }
            }
        }
    }
    if (!stat) printf("No\n");
    return 0;
}
