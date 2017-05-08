#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 100

double Manhattan(double x[NUM], double y[NUM], int n);
double Euclidean(double x[NUM], double y[NUM], int n);
double MinkowskiP3(double x[NUM], double y[NUM], int n);
double Chebyshev(double x[NUM], double y[NUM], int n);

int a;

int main(void)
{
	int i ;
	int  n ;
	double ans1,ans2,ans3,ans4;
	double x[NUM];
	double y[NUM];

	scanf("%d", &n);
	for (i = 0; i < n;i++){
		scanf("%lf", &x[i]);
	}
	for (i = 0; i < n; i++){
		scanf("%lf", &y[i]);
	}

	ans1 = Manhattan(x, y, n);
	ans2 = Euclidean(x, y, n);
	ans3 = MinkowskiP3(x, y, n);
	ans4 = Chebyshev(x, y, n);

	printf("%lf\n%lf\n%lf\n%lf\n", ans1,ans2,ans3,ans4);

	return 0;
}

double Manhattan(double x[NUM], double y[NUM], int n){
	
	double z[NUM];
	double p1 = 0;

	for (a = 0; a < n; a++){
		z[a] = x[a] - y[a];
		p1 += abs(z[a]);
	}

	return p1;
}

double Euclidean(double x[NUM], double y[NUM], int n){

	double z[NUM];
	double s[NUM];
	double p2 = 0;

	for (a = 0; a < n; a++){
		z[a] = x[a] - y[a];
		s[a] = abs(z[a])*abs(z[a]);
		p2 += s[a];
	}

	return sqrt(p2);
}

double MinkowskiP3(double x[NUM], double y[NUM], int n){
	double z[NUM];
	double s[NUM];
	double p3 = 0;

	for (a = 0; a < n; a++){
		z[a] = x[a] - y[a];
		s[a] = abs(z[a])*abs(z[a])*abs(z[a]);
		p3 += s[a];
	}

	return pow(p3,1.0/3.0);
}

double Chebyshev(double x[NUM], double y[NUM], int n){

	double z[NUM];
	double s[NUM];

	for (a = 0; a < n; a++){
		z[a] = x[a] - y[a];
		s[a] = abs(z[a]);
	}
	double max = s[0];
	for (a = 0; a < n; a++){
		if (max<s[a])
			max = s[a];
	}

	return max;
}