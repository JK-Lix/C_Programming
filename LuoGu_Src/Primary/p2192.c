/*************************************************************************
	> File Name: p2192.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年04月06日 星期六 16时15分04秒
 ************************************************************************/

#include<stdio.h>

void print(int a, int b) {
    for (int i = 0; i < a + b;) {
        if (a != 0) {
            printf("5");
            a--;
            continue;
        }
        printf("0");
        b--;
    }
}

void judge(int a, int b) {
    if (a < 9 && b != 0) printf("0");
    else if (b == 0) printf("-1");
    else if (a % 9 == 0) print(a, b);
    else {
        while ((a % 9)) a--;
        print(a, b);
    }
}

int main() {
    int n, a = 0, b = 0;
    int temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (temp == 5) {
            a++;
        } else if (temp == 0) {
            b++;
        }
    }
    judge(a, b);
    return 0;
}
