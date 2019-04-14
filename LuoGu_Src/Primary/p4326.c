/*************************************************************************
	> File Name: p4326.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年04月06日 星期六 15时54分03秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

double __a = acos(-1.0);
#define nPi __a
#define uPi 2.000000
int main() {
    int r;
    scanf("%d", &r);
    printf("%lf\n", pow(r, 2) * nPi);
    printf("%lf", pow(r, 2) * uPi);
    return 0;
}
