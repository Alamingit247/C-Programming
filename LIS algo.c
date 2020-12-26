#include <stdio.h>

int main()
{
    int n,*arr,*LIS,i,j,max=0;
    printf("enter no of elements and then the elements\n");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    // initialise the LIS array to all 1
    LIS=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        LIS[i]=1;

    // Compute LIS value in bottom up mannner
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        if(arr[j]<arr[i] && (LIS[j]+1)>LIS[i])
        LIS[i]=LIS[j]+1;
    }
    // Find maximum LIS value
    for(i=0;i<n;i++)
    if(max<LIS[i])
    max=LIS[i];

    printf("Length of LIS is %d\n",max);
    return 0;
}
/* O(n^2) complexity .... Can be reduced to O(nlogn) */
