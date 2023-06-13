#include <stdio.h>
#include <math.h>

int main(){
	int n, i;
	double x, res = 1, gt = 1;
	scanf("%d%lf", &n, &x);
	if (n > 0){
		for(i = 1; i <= n; i++){
			gt *= i;
			res += pow(x, i)/gt;
		}
		printf("%lf", res);
	}
	else	printf("Error");
	return 0;
}
