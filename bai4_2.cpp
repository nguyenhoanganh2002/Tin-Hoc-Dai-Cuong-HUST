#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	if (n >= 2){
		int flag = 1;
		for(i = 2; i <= n/2; i++){
			if (n%i == 0){
				flag = 0;
				break;
			}
		}
		if (flag == 1)	printf("La so nguyen to");
		else	printf("Khong phai so nguyen to");
	}
	else	printf("Khong phai so nguyen to");
	return 0;
}
