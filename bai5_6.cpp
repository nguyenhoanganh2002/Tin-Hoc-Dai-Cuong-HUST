#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000], T[1000];
    int res[257] = {};
    
    scanf("%s%s", S, T);
    
	for(int i = 0; i < strlen(S); i++){
		res[S[i]] += 1;
	}
	for(int i = 0; i < strlen(T); i++){
		res[T[i]] += 1;
	}
	
	for(int i = 0; i < 256; i++){
		if (res[i] != 0)	printf("%c", i);
	}
	for(int i = 0; i < 256; i++){
		if (res[i] != 0)	printf("\n%d", res[i]);
	}
	
    return 0;
}
