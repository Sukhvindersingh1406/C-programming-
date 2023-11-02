/*#include<stdio.h>
void main()
{
    int i,f=0, s=1, n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d\n",f);
        int next=f+s;//0+1=1
        f=s;
        s=next;
        i+=1;

    }
    return 0;

}*/
#include<stdio.h>
int main ()
{
    int i,n;
    for(i=1;i<=100;i++)
    {
        if(i%2==0||i%3==0||i%5==0 )
        { 
         printf("\n%d is  divisible 2 3 5",i);
        }
        else{
            printf("\n%d is not divisble by 2 3 5  ",i);
        }
    }
    return 0;

}