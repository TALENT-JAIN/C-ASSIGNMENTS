#include <stdio.h>
int main(){
	int n;
	printf("ENTER YOUR DESIRED NUMBER\n");
	scanf("%d",&n);
	printf("Value is %d\n ",n);
	if(n%2==0){
		printf("YOUR NUMBER IS EVEN");
		}
		else{
			printf("YOUR NUMBER IS ODD");
		}
return 0;
}