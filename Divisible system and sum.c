/*Write a program in C to find the number and sum of all integer between 100 and 200 which are divisible by 9.
Expected Output : Numbers between 100 and 200, divisible by 9 : 108 117 126 135 144 153 162 171 180 189 198
The sum : 1683*/
#include<stdio.h>
int main()

{
    int m,n=200,sum=0;

    for(m=100; m<=n; m++){
        if(m%9==0)
        printf("%d ",m);
        sum = sum+m;
    }

        printf("The sum : %d",sum);


    return 0;
}
