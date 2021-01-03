#include<stdio.h>
int main()

{
    int n, i, first=0, second=1, next;
    scanf("%d",&n);
    printf("%d %d ",first,second);

    for(i=1; i<=n-2; i++)//while(i<=n-2)
    {
        next = first + second;
        first = second;
        second = next;
        printf("%d ",next);
        //i++;
    }

    return 0;
}
