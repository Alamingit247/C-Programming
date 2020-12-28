#include<stdio.h>
int main()

{
    int i,n;
    double sum=0;
    scanf("%d",&n);

    printf("1+");
    for(i=2; i<=n; i++)
    {
        printf("1/%d+",i);
        sum=sum+(1.00/i);
    }
    printf("\n");
    printf("Result = %.2lf\n",sum);

    return 0;
}
