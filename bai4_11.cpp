#include <stdio.h>
#include <math.h>

int main(){
	int n, i;
	double x, res = 1, gt = 1;
	scanf("%lf%d", &x, &n);
	if (n >= 1 && x >= 0){
		for(i = 1; i <= n; i++){
			gt *= i;
			res += pow(x, i)/gt;
		}
		printf("%.4lf", res);
	}
	else	printf("Error");
	return 0;
}
