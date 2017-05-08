#include <stdio.h>
#define NUM 10000
int main(void)
{
	long int num[NUM];
	int n, i, j;
	int min, max;
	long int sum = 0L;

	scanf("%d", &n);
	for (i = 0; i < n; i++)scanf("%ld", &num[i]);

	min = num[0];
	max = num[0];
	for (j = 0; j < n; j++){
		if (min > num[j])min = num[j];
		if (max < num[j])max = num[j];
		sum += num[j];
	}

	printf("%d %d %ld\n", min, max, sum);

	return 0;
}