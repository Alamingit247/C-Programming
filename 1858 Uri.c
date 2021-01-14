#include<stdio.h>
int main()
{
    /*int n, i, j, p[20], flag=0, fl=0;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }
    for(i=0; i<n; i++)
    {
        if(p[i]==0)continue;
        for(j=0; j<i; j++)
        {
            if(p[i]==p[j])
            {
                flag = 1;
            }

        }
        if(flag != 1)
        {
            fl++;
        }
    }
    printf("%d\n", fl);
    */
    int i, j, k, l, m, n;
    while(scanf("%d",&n)!=EOF)
    {
        l=20;
        for(i=0; i<n; i++)
        {
            scanf("%d", &m);
            if(m<l)
            {
                l=m;
                k=i+1;
            }
        }
        printf("%d\n", k);
    }

    return 0;
}
