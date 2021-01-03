/*Write a C program that reads a number and finds the first and last digit of that number.
Sample input: 1234
Sample output: First Digit: 1, Last Digit: 4*/
#include<stdio.h>
int main()

{
    int i=1,n,sum=0,rem=0;
    scanf("%d",&n);
    printf("Last digit=%d\n",n%10);
    if(n<0)
        n=-n;
    while(n)
    {
        rem=n%10;
        n=n/10;
        if(i==1)
        {
            sum=sum+rem;
            i++;
        }
        if(n<10)
        {
            printf("first digit=%d\n",n);
            sum=sum+n;
            break;
        }
    }
     printf("\nSum of first and last degit = %d",sum);

     return 0;
}

