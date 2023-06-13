#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	if (n <= 0)	printf("Error");
	else{
		int arr[n], i, sum = 0;
		for(i = 0; i < n; i++){
			scanf("%d", &arr[i]);
		}
		for(i = n - 1; i >= 0; i--){
			printf("%d ", arr[i]);
			sum += arr[i];
		}
		printf("\n%d", sum);
	}
	return 0;
}
