#include<stdio.h>
main() {
	int i;
	int j;
	int n;
	printf("Nhap vao so dong: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
