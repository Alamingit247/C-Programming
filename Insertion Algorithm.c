#include<stdio.h>

int main()
{
    int a[100], i, j, n, t=0, key;
    printf("Please enter the number of value: ");
    scanf("%d",&n);
    printf("Please enter the value: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    //for(i=1; i<n; i++)
    //{
        for(j=1; j<n; j++)
    {
        key = a[j];
        i=j-1;

        while(i>=0 && a[i]>key)
        {
            a[i+1] = a[i];
            i = i-1;
        }
        a[i+1] = key;
    }
   // }

    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;

}

/*for(j=1; j<n; j++)
    {
        key = a[j];
        i=j-1;

        while(i>0 && a[i]>key)
        {
            a[i+1] = a[i];
            i = i-1;
        }
        a[i+1] = key;
    }

    j = i;
        while ( j > 0 && a[j-1] > a[j])
        {
            t = a[j];
            a[j]   = a[j-1];
            a[j-1] = t;
            j--;
        }
*/
