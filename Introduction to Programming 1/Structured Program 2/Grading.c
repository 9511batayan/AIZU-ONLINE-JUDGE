#include<stdio.h>
 
int main(){
 
    int m[100];
    int f[100];
    int r[100];
    int j=0;
    int i=0;
    int ans[100];
 
    while(1){
        scanf("%d %d %d", &m[i], &f[i], &r[i]);
        if (m[i] == -1 && f[i] == -1 && r[i] == -1)break;
        i++;
    }
    while (1){
        if (m[j] == -1 && f[j] == -1)break;
         
        ans[j] = m[j] + f[j];
         
        if (m[j] == -1 || f[j] == -1)printf("F\n");
        else if (ans[j] >= 80)printf("A\n");
        else if (65 <= ans[j]&&ans[j] < 80)printf("B\n");
        else if (50 <= ans[j] && ans[j] < 65)printf("C\n");
        else if (30 <= ans[j] && ans[j] < 50){
            if (r[j] >= 50)printf("C\n");
            else printf("D\n");
        }
        else if(ans[j] < 30)
            printf("F\n");
        j++;
    }
 
    return 0;
}