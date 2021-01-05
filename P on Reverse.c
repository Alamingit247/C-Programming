#include<stdio.h>
int Reverse()
{
    int n,reverse;
    printf("Please enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        reverse=n%10;
        printf("%d",reverse);
        n=n/10;

    }
     return reverse;
}
int main()
{
    int reverse;
    reverse=Reverse();
    return 0;
}
