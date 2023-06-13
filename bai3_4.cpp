#include <stdio.h>

int main(){
	double gkt, cn, t;
	scanf("%lf%lf%lf", &gkt, &cn, &t);
	double gst = cn*gkt*t/100 + cn*gkt;
	printf("%lf", gst);
	// gst = cn*gkt*t/100 + cn*gkt
	return 0;
}
