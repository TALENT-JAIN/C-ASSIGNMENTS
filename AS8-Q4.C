#include <stdio.h>
int main(){
	int n;
	printf("ENTER YOUR  NUMBER\n");
	scanf("%d",&n);
	printf("Value is %d\n ",n);
	if(n%7==0){
		printf("IT IS DIVISIBLE BY 7");
		}
		else if(n%3==0){
			printf("IT IS DIVISIBLE BY 3");
		}
		else{
			printf("IT IS NOT DIVISIBLE BY 3 or 7");
		}
return 0;
}