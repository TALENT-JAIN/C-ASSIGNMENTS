#include<stdio.h>
int main(){
int num1;
int num2;
printf("enter the value of first number");
scanf("%d",&num1);
printf("enter the value of second number");
scanf("%d",&num2);
if (num1>num2)
{
  if (num1<1000 && num1>500)
  {
    printf("%d is larger number",num1);
  }
}
else if (num2>num1)
{
    if (num2<1000 && num2>500)
    {
        printf("%d is larger number",num2);
    }
}
return 0;
}