#include <stdio.h>

#define NUM 100

int main(void)
{
	int n;
	int m;
	int l;
	int a[NUM][NUM];
	int b[NUM][NUM];
	double c[NUM][NUM] = { 0 };
	int i;
	int j;
	int k;

	scanf("%d %d %d", &n, &m,&l);

	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < m; i++){
		for (j = 0; j < l; j++){
			scanf("%d", &b[i][j]);
		}
	}

	for (i = 0; i < n;i++){
		for (j = 0; j < l; j++){
			for (k = 0; k < m; k++){
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}

	for (i = 0; i < n; i++){
		for (j = 0; j < l; j++){
			if (j < l-1)printf("%.lf ", c[i][j]);
			else printf("%.lf\n", c[i][j]);
		}
	}

	return 0;
}