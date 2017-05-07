#define _USE_MATH_DEFINES
#include <stdio.h>
#include<math.h>
 
int main(void)
{
    int a, b, C;
    double c;
    double S, L, h;
    double z;
    scanf("%d %d %d", &a, &b, &C);
     
    z=C*M_PI / 180;
    S = (a*b*sin(z))/2;
    c = (a*a) + (b*b) - 2 * a*b*cos(z);
    L = (double)a + (double)b + sqrt(c);
    h = 2 * S / a;
    printf("%f\n%f\n%f\n", S, L, h);
 
    return 0;
}