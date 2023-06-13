#include <stdio.h>
#define PI 3.14159

int main(){
    double r;
    scanf("%lf", &r);
    if (r <= 0) printf("ERROR");
    else{
        printf("%lf\n%lf", 2*PI*r, PI*r*r);
    }
    return 0;
}
