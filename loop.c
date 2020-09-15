#include <stdio.h>

int main() {
	int i;
	int j = 4;
	int k = 7;

	printf("For Loop:\n");
	for (i = 1; i <= 3; i++) {
		printf("%d\n", i);
	}

	printf("\nWhile Loop:\n");
	while (j <= 6) {
		printf("%d\n", j);
		j++;
	}

	printf("\nDo While Loop:\n");
	do {
		printf("%d\n", k);
		k++;
	} while (k <= 9);
	return 0;
}