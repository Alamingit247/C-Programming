#include<stdio.h>
int main()
{
    int h, p, i, dis=0, flag=0;
    scanf("%d %d", &h, &p);
    int j[p];
    if((h>=1 && h<=5) && (p>=2 && p<=100))
    {
        for(i=0; i<p; i++)
        {
            scanf("%d", &j[i]);
        }
        for(i=1; i<p; i++)
        {
            if(j[i]>j[i-1])
            {
                dis = (j[i]-j[i-1]);
            }
            else
            {
                dis = (j[i-1]-j[i]);
            }
            if(dis<=h)
            {
                flag++;
            }
        }
        if(flag == p-1)
        {
            printf("YOU WIN\n");
        }
        else
        {
            printf("GAME OVER\n");
        }
    }


    return 0;

}
