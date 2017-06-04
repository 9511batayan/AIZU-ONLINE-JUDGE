#include <stdio.h>

#define NUM 100

int main(void)
{
	int r,c;
	int i,j;
	int count[NUM + 1][NUM + 1] = { 0 };
	int count1[NUM][NUM];
	int sum = 0;
	scanf("%d %d", &r, &c);

	for (i = 0; i < r; i++){
		for (j = 0; j < c; j++){
			scanf("%d", &count1[i][j]);
			count[i][j] = count1[i][j];
		}
	}
	//�e��̌v�Z
	for (i = 0; i < c; i++){
		for (j = 0; j < r; j++){
			count[r][i] += count1[j][i];
		}
		sum += count[r][i];//�\�S�̂̍��v�l�̉��Z
	}
	//�e�s�̌v�Z
	for (i = 0; i < r; i++){
		for (j = 0; j < c; j++){
			count[i][c] += count1[i][j];
		}
	}
	//�\�S�̂̍��v�l
	count[r][c] = sum;

	for (i = 0; i <= r; i++){
		for (j = 0; j <= c; j++){
			printf("%d", count[i][j]);
			if (j < c)
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}