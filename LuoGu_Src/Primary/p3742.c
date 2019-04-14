#include <stdio.h>

int main() {
	int n, i;
	char c;
	scanf("%d", &n);
	char a[103] = {0}, b[103] = {0};
	scanf("%s", a); 
	scanf("%s", b);
	for (i = 0; i < n; i++) {
		if (a[i] < b[i]) {
			printf("-1");
			return 0;
		}
	}
	printf("%s", b);
	return 0;
}
