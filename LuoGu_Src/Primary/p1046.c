#include <stdio.h>

int main() {
	int i, t, cnt = 0;
	int app[10];
	for (i = 0; i < 10; i++) {
		scanf("%d", &app[i]);
	}
	scanf("%d", &t);
	for (i = 0; i < 10; i++) {
		if (app[i] <= t + 30) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
