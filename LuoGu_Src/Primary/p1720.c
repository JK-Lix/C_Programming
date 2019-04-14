#include<stdio.h>
#include<math.h>

int main() {
	int n;
	scanf("%d", &n);
	double a;
	a = sqrt(5.0);
	printf("%.2f", (pow((1 + a) / 2, n) - pow((1 - a) / 2, n)) / a);
	return 0;
}
