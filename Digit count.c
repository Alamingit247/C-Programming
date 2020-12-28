/*Write a C program that reads a number from the user and counts the number of digit in that number.
Sample input: 1234
Sample output: 4*/
#include<stdio.h>
int main()

{
    int n,count=0;
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("\nTotal digits = %d",count);

    return 0;
}

