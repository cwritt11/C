#include<stdio.h>
int main(){
	int pos = 5;
	int neg = -5;
	int zero = 0;

	if (pos > 0) {
		printf("%d is a positive number\n", pos);
	} else {
		printf("%d is not a positive number\n", pos);
	}

	if (neg < 0) {
		printf("%d is a negative number\n", neg);
	} else {
		printf("%d is not a negative number\n", neg);
	}

	if (zero == 0) {
		printf("%d is zero\n", zero);
	} else {
		printf("%d is not zero\n", zero);
	}

	return 0;
}