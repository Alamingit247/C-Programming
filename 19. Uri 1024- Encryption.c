#include<stdio.h>
#include<string.h>

int main()
{
    char str1[1000],str2[1000];
    int i, k, j, n, m, l, tcas;

    scanf("%d",&tcas);
    getchar();
    while(tcas--)
    {
        gets(str1);
        k = strlen(str1);
        for(i=0;i<k;i++)
        {
            if((str1[i]>='A' && str1[i]<='Z') || (str1[i]>='a'&& str1[i]<='z'))
            str1[i] = str1[i] + 3;
        }
        n=0;
        for(j=k-1;j>=0;j--)
        {
            str2[n] = str1[j];
            n++;
        }
        str2[n] = '\0';
        l = k/2;
        for(i=l;i<k;i++)
        {
            str2[i] =  str2[i] - 1;
        }
        printf("%s\n",str2);

    }

    return 0;

}
