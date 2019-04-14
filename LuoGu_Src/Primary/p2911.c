#include <stdio.h>

int main() {
	int a, b, c;
	int i, j, k;
	scanf("%d %d %d", &a, &b, &c);
	int ans[a + b + c + 5];
	for (i = 0; i <= a + b + c + 5; i++) {
		ans[i] = 0;
	}
	for (i = 0; i <= a; i++) {
		for (j = 0; j <= b; j++) {
			for (k = 0; k <= c; k++) {
				ans[i + j + k]++;
			}
		}
	}
	int an = 0;
	int temp = 0;
	for (i = 0; i <= a + b + c; i++) {
		if (ans[i] > temp) {
			an = i;
			temp = ans[i];
		}
	}
	printf("%d", an + 1);
	return 0;
}
