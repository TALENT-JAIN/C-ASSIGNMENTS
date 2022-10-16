#include <stdio.h>
int main() {
    int length ;
    int breadth ;
    int area;
    int peri;
    printf ("enter the value of length\n");
    scanf ("%d",&length);
    printf ("enter your breath\n");
    scanf ("%d",&breadth);
    printf ("the area of rectangle is %d\n",area);
    area = (length*breadth);
    printf ("the perimeter of rectangle is %d",peri);
    peri= 2*(length+breath);

return 0;
}