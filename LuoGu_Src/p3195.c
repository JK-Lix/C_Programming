/*************************************************************************
	> File Name: toy.nclude<stdlib.h>c
	> Author: Lix
	> Mail: 776579471@qq.com
	> URL: https://github.com/JK-Lix
	> Created Time: 2019年06月07日 星期五 14时24分46秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<inttypes.h>

#define MAX_N 1000000
#define ll long long
ll c[MAX_N + 5], sum[MAX_N + 5];
ll f[MAX_N + 5], dp[MAX_N + 5];
ll q[MAX_N + 5], head = 1, tail = 1;
ll n, l;

void set(int i, int j) {
    dp[i] = dp[j] + (sum[i] - sum[j] + i - j - l - 1) * (sum[i] - sum[j] + i - j - l - 1);
    f[i] = dp[i] + (sum[i] + i + l + 1) * (sum[i] + i + l + 1);
}

double slope(int i, int j) {
    return 1.0 * (f[j] - f[i]) / (sum[j] - sum[i] - i + j);
}

int main() {
    scanf("%lld%lld", &n, &l);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &c[i]);
        sum[i] = sum[i - 1] + c[i];
    }
    set(1, 0);
    f[0] = dp[0] + (sum[0] + l + 1) * (sum[0] + l + 1);
    head = tail = 1;
    for (int i = 1; i <= n; i++) {
        while (tail > head && 2 * (sum[i] + i) > slope(q[head], q[head + 1])) ++head;
        set(i, q[head]);
        while (tail > head && slope(q[tail - 1], i) < slope(q[tail - 1], q[tail])) --tail;
        q[++tail] = i;
    }
    printf("%lld", dp[n]);
    return 0;
}
