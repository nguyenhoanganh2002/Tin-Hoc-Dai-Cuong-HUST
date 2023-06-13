#include <stdio.h>
#include <math.h>

int main(){
	double X, Y, F=0;
	scanf("%lf%lf", &X, &Y);
	int i;
	for (i = 0; i <= 6; i++){
		F += pow(X,i)*pow(Y, 6-i);
	}
	
	printf("%lf", F);
	
	return 0;
}
