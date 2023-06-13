#include <stdio.h>
#include <math.h>

int main(){
	int n, i;
	double x, res = 0;
	scanf("%d%lf", &n, &x);
	if (n > 0){
		for(i = 0; i <= n; i++){
			res += pow(x, i);
		}
		printf("%lf", res);
	}
	else	printf("Error");
	return 0;
}
