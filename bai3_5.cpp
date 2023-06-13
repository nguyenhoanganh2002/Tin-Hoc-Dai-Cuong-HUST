#include <stdio.h>
#include <math.h>

int main(){
	double x, y, z;
	scanf("%lf%lf%lf", &x, &y, &z);
	double F = (x + y + z)/(pow(x,2) + pow(y, 2) + 1) - fabs(x - z*cos(y));
	printf("%lf", F);	
	
	return 0;
}
