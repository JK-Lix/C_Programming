/*************************************************************************
	> File Name: p1423.c
	> Author: Lix
	> Mail: 776579471@qq.com
	> Created Time: 2019年04月06日 星期六 09时49分43秒
 ************************************************************************/
#include<stdio.h>
#include<math.h>

int main() {
    double n;
    scanf("%lf", &n);
    printf("%.lf", ceil(log(1 - n/100) / log(0.98)));
    return 0;
}
