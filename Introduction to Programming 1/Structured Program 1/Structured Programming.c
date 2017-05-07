#include <stdio.h>
 
int main(void)
{
    int x;
    int n;
    int i=1;
 
    scanf("%d", &n);
 
    while(i <= n){
        x = i;
        if (x % 3 == 0){
            printf(" %d", i);
        }
        else{
            while (x){
                if (x % 10 == 3){
                    printf(" %d", i);
                    break;
                }
                x /= 10;
            }
        }
        ++i;
    }
    printf("\n");
 
    return 0;
}