#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("ENTER YOUR NUMBER\n");
	scanf("%d",&a);
	printf("ENTER YOUR SECOND NUMBER\n");
	scanf("%d",&b);
printf("ENTER YOUR THIRD  NUMBER\n");
	scanf("%d",&c);
	if(a>>b && a>>c){
		 printf ("%d IS GREATER",a);
	}
	else if (b>>a && b>>c)
	{
		printf("%d IS GREATER",b);
	}
	else {
		printf("%d IS GREATER",c);
	}
	return 0;
}