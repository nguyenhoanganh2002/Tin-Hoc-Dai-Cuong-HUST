#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if (n >= 0 && n < 8){
		int res = 1, i;
		for (i = 2; i <= n; i++){
			res *= i;
		}
		printf("%d", res);
	}
	else	printf("ERROR");
	return 0;
}
