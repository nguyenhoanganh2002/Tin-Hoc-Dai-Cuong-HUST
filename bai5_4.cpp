#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n], i, res=0;
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < n - 1; i++){
		if (arr[i]*arr[i+1] > res)	res = arr[i]*arr[i+1];
	}
	
	printf("%d", res);
	
	return 0;
}
