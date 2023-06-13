#include <stdio.h>
#include <math.h>

int main(){
	int n, i;
	double x, res = 1;
	scanf("%lf%d", &x, &n);
	if (n < 1 || x < 0)	printf("Error");
	else{
		for(i = 1; i <= n; i++){
			res += pow(x, i)/i;
		}
		printf("%.4lf", res);
	}	
	return 0;
}
