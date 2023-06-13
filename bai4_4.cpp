#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > 0 && b > 0){
		int i;
		// tim uoc chung lon nhat
		for(i = a; i >= 1; i--){
			if (a%i == 0 && b%i == 0){
				printf("%d", i);
				break;
			}
		}
		// tim boi chung nho nhat
		for(i = a; ; i++){
			if (i%a == 0 && i%b == 0){
				printf("\n%d", i);
				break;
			}
		}
	}
	else	printf("ERROR");
	return 0;
}
