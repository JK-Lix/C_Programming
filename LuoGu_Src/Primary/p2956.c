#include <stdio.h>

int main() {
	int l, w, n, ans = 0;
	scanf("%d %d %d", &l, &w, &n);
	int t[l][w];
	int x[2], y[2];
	int i,j;
	for (i = 0; i < l; i++) {
		for (j = 0; j < w; j++) {
			t[i][j] = 0;
		}
	}
	while (n--) {
		scanf("%d %d %d %d", &x[0], &x[1], &y[0], &y[1]);
		for (i = x[0] - 1; i <= y[0] - 1; i++) {
			for (j = x[1] - 1; j <= y[1] - 1; j++) {
				if (!t[i][j]) {
					t[i][j] = 1;
					ans++;
				}
			}
		}
	}	
	printf("%d", ans);
	return 0;
} 
