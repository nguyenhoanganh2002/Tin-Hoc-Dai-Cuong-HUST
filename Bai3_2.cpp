#include <stdio.h>
#define PI 3.14159

int main(){
	double r;
	scanf("%lf", &r);
	if (r > 0){
		double cv = 2*PI*r;
		double dt = PI*r*r;
		printf("%lf\n%lf", cv, dt);
	}
	else	printf("ERROR");
	
	return 0;
}
