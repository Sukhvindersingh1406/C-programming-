#include<stdio.h>
int main()
{
    int i,a,fact=1;
    scanf( "%d",&a);
    for(i=1;i<=a;i++)// n=5,i=1+1=2+1=3+1=4+1=5+1=6+1=7
    {
        printf("%d\n",i);
        //1
        //2
        //3
        //4
        //5
        fact*=i;
        // 1*1=1*2=2*3=6*4=24*5-120
    }
    printf("\n factorial of a given number is %d",fact);
    return 0;
}
