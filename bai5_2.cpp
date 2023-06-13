#include <stdio.h>
#include <math.h>

int main(){
	int n, psum=0, nsum=0, count=0;
	scanf("%d", &n);
	int arr[n], i;
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if (arr[i] > 0)	psum += arr[i];
		if (arr[i] < 0){
			nsum += arr[i];
			count += 1;
		}
	}
	if (nsum == 0)	printf("Mang khong co so am");
	else	printf("%f", (1.0*nsum)/count);
	if (psum == 0)	printf(" Mang khong co so duong");
	else	printf(" %f", 1.0*psum);
	
	return 0;
}
