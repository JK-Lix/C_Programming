#include <stdio.h>

int main() {
	int n, i, op;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &op);
		if (op & 1) printf("zs wins\n");
		else printf("ps wins\n");
	}
	return 0;
}
