#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000], res[1000] = {};
    fflush(stdin);
    fgets(S, sizeof(S), stdin);
    
    for(int i = 0; i < strlen(S); i++){
    	if (S[i] != ' ')	res[i] = S[i];
	}
    
    int flag = 0;
	for(int i = 0; i < 1000; i++){
		if (flag == 0){
			if (res[i] != 0){
				flag = 1;
				printf("%c", res[i]);
			}
		}
		else{
			if (res[i] != 0){
				if (res[i-1] == 0)	printf(" %c", res[i]);
				else	printf("%c", res[i]);
			}
		}
	}
	
    return 0;
}
