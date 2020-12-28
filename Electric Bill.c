/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
int main()

{
    double n,bill,Parcentages,Total_electricity_bill;
    printf("Please enter how many units: ");
    scanf("%lf",&n);

    if(n<=50)
        bill = n*0.50;
    else if(n>50 && n<=150)
        bill = n*0.75;
    else if(n>150 && n<=250)
        bill = n*1.20;
    else if(n>=250)
        bill = n*1.50;

    Parcentages = ((bill*20)/100);

    Total_electricity_bill = bill+Parcentages;

    printf("\nTotal electricity bill = %.2lf Rs.\n",Total_electricity_bill);

    return 0;

}



