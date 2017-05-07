#include <stdio.h>
#define NUM 100
int main(void)
{
    int n;
    int i,j;
    int a[NUM];
 
    scanf("%d", &n);
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
 
    for (j = n - 1 ; j >= 0; j--){
        printf("%d", a[j]);
        if (a[j]==a[0])break;
        printf(" ");
    }
    printf("\n");
 
    return 0;
}