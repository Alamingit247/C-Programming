#include<stdio.h>
int main()
{
    int n, i, value, c;

    while(scanf("%d", &n)!= EOF)
    {
        c = 0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &value);

            if(c <= value)
            {
                c = value;
            }
        }

        if(c<10)
        {
            printf("1\n");
        }
        else if(c >= 10 && c < 20)
        {
            printf("2\n");
        }
        else if(c >= 20)
        {
            printf("3\n");
        }
    }

    return 0;

}
if(p[i] == 0)continue;
        for(j=0; j<i; j++)
        {
            if(p[j] == p[i])
            {
                continue;
            }
            else flag++;
        }
