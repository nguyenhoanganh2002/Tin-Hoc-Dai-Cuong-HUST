#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n], i, j;
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	// sap xep tang dan
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if (arr[i] > arr[j]){
				// swap
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	// in ket qua ra
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
