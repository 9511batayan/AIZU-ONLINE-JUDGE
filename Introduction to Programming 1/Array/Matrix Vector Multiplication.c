#include <stdio.h>

#define NUM 100

int main(void)
{
	int n,m;
	int i,j;
	int a[NUM][NUM];
	int b[NUM];
	int c[NUM] = { 0 };

	scanf("%d %d",&n,&m);
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < m; i++)scanf("%d", &b[i]);
	
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			c[i] += a[i][j] * b[j];
		}
	}

	for (i = 0; i < n; i++){
		printf("%d\n", c[i]);
	}

	return 0;
}