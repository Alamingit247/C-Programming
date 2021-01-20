#include<stdio.h>
int main()
{
    int value,n,k;
    while(scanf("%d %d",&n,&k)==2 && k>1)
    {
        value=n;
        while(n>=k)
        {
            value= value+n/k;
            n=(n/k)+(n%k);
        }
        printf("%d\n",value);
    }
    return 0;
}
