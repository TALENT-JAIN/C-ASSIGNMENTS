#include <stdio.h>
int main() {
    //Q2
    int length ;
    int breath ;
    int area ;
    printf ("enter the value of length\n");
    scanf ("%d",&length);
    printf ("the length is %d\n",length);
    printf ("enter the value of breath\n");
    scanf ("%d",&breath);
    printf ("the breath is %d\n",breath);
    area = length*breath ;
    printf ("the area of rectangle is %d",area);
return 0;
}