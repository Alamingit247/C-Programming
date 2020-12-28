/*Write a C program that reads a number from the user and print its factorial.
Sample input: 5
Sample output : 5*4*3*2*1= 120*/
#include<stdio.h>
int main()

{
    int n,f,i,factorial=1;
    scanf("%d",&n);

    for(i=n; i>1; i--){
       printf("%d*",i);

       factorial=factorial*i;
    }
    if(i==1)
        printf("%d",i);
    printf("= %d",factorial);

    return 0;
}

