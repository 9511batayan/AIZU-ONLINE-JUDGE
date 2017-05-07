#include <stdio.h>
 
#define NUM 1000
 
int main(void)
{
    int h[NUM];
    int w[NUM];
    int i, j;
    int s;
 
    i = 0;
    s = 0;
 
    while (1){
        scanf("%d %d", &h[i], &w[i]);
        if (h[i] == 0 && w[i] == 0)break;
        i++;
    }
 
    while (h[s] != 0 && w[s] != 0){
        for (i = 0; i < h[s]; i++){  //縦
            for (j = 0; j < w[s]; j++){  //横
               //偶数列、偶数行または奇数列、奇数行の時「#」出力
		それ以外は「.」出力
		if ((i % 2 == 0 && j % 2 ==0) || 
                    (i % 2==1 && j % 2 ==1)){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
            printf("\n");
        }
        s++;
        printf("\n");
    }

    return 0;
}