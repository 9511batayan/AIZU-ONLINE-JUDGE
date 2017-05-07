#include <stdio.h>
#include<math.h>
 
int main(void)
{
    double x1,y1;
    double x2,y2;
    double ans;
    double X,Y,Z;
 
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
 
    X = (x2 - x1)*(x2 - x1);
    Y = (y2 - y1)*(y2 - y1);
    Z = X + Y;
    ans = sqrt(Z);
 
    printf("%f\n", ans);
 
    return 0;
}