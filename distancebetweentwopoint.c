#include<stdio.h>
int main(){
    float x1,y1,x2,y2,distance;
    printf("enter point 1(x1,y1)");
    scanf("%f %f", &x1,&y1);
    printf("enter point 2(x2,y2)");
    scanf("%f %f", &x2 , &y2);
    distance = sqrt(pow( x2-x1,2)+ pow ( y2-y1,2));
    printf(" dustance between two point is %f", distance);
    return 0;
}