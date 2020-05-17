#include <stdio.h>
int main() {
	int i;
	int j;
	int n;
	printf("nhap vao so dong:");
	scanf("%d", &n);
	printf("in theo truong hop a: \n");
	for (i = 0; i < n; i++) {
		for (j = 1; j <= i + 1 ; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	printf("in theo truong hop b: \n ");
	for (i = 0; i < n; i++) {
		for (j = 1; j <= n - 1;j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
