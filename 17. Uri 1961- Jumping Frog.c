#include<stdio.h>
int main()
{
    int h, p, i, j[20], dis=0, flag=0;
    scanf("%d %d", &h, &p);

    for(i=0; i<p; i++)
    {
        scanf("%d", &j[i]);
    }
    for(i=0; i<p-1; i++)
    {
        if(j[i+1]>j[i])
        {
            dis = (j[i+1]-j[i]);
        }
        else
        {
            dis = (j[i]-j[i+1]);
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
    return 0;

}
