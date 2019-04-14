/*************************************************************************
	> File Name: p1765.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年04月06日 星期六 11时20分20秒
 ************************************************************************/

#include<stdio.h>

int select(int n) {
    if (n < 0) return 0;
    if (n <= 14) return n % 3 + 1;
    else if (n <= 18) return (n + 1) % 4 + 1;
    else if (n <= 21) return (n - 1) % 3 + 1;
    else if (n <= 25) return (n - 2) % 4 + 1;
    else return 0;
}

int main() {
    char c, a[201] = {0};
    int cnt = 0;
    int i = 0, j;
    while (c = getchar()) {
        if (c == '\n') break;
        a[i] = c;
        i++;
    }
    a[i] = '\0';
    for (j = 0; j < i; j++) {   
        if (a[j] == ' ') cnt++; 
        else cnt += select(a[j] - 'a');
    }
    printf("%d", cnt);
    return 0;
}
