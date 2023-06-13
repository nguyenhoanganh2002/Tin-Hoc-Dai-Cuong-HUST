#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if (n > 0 && n < 1000){
		int res = 0;
		while (n > 0){
			res += n%10;
			n /= 10;
		}
		printf("%d", res);
	}
	else	printf("ERROR");
	
	return 0;
}
