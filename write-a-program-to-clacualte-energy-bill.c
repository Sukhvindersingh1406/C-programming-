// write a program to calculate energy bill .
// Read starting and ending meter readings and charges are as follows : 

// No of units                                   Consumed rate in RS  
// 200-500                                             3.50
// 100-200                                             2.50
// less than 100                                       1.50




#include<stdio.h>
int main ()
{
    int strt , end ,unit,rate  ;
    printf("Enter the starting meter reading :");
    scanf("%d",&strt);
    printf("Enter the ending meter reading :");
    scanf ("%d",&end);
    unit= end - strt;
    if (unit>=200 && unit<=500){
        rate =3.5*unit;
    }

    else if (unit<200 && unit>=100) {
        rate =2.5*unit;
    }

    else if (unit<100 && unit>=0){
        rate =1.5*unit;

    }
    else {
        printf("invalid input ");

    }
    printf("charges = %d",rate );
    return 0;
}
