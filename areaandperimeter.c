#include<stdio.h>
int main()
{
// circle
float pi=3.14,r;
printf ("enter the radius of circle");
scanf ("%f",&r);
printf("area of circle =  %f\n",pi*r*r);
printf("perimeter of circle= %f\n,2*pir");
// rectangle
float l,b;
printf("enter lengh and breadth of rectangle ");
scanf("%f,%f ", &l,&b);
printf("perimter of rectangle=%f\n",2*l+b);
//sqaure
float s;
printf("enter side of square");
scanf("%f",&s);
printf("area of square=%f",s*s);
printf("perimter of square=%f\n",4*s);
return 0;
}