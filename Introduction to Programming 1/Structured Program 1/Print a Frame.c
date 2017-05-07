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
        for (i = 0; i < h[s]; i++){  //c
            for (j = 0; j < w[s]; j++){  //‰¡
                if (i == 0 || i==h[s]-1 || j == 0 || j==w[s]-1)
                    printf("#");
                else printf(".");
            }
            printf("\n");
        }
        s++;
        printf("\n");
    }

    return 0;
}