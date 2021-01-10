#include<stdio.h>
int main()
{
    float a,b,c,p,q,r;
    scanf("%f %f %f",&a,&b,&c);

    p=(b*b)-(4*a*c);
    if(a==0 || p<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        q=(-b+sqrt(p))/(2*a);
        r=(-b-sqrt(p))/(2*a);
        printf("R1 = %.5f\nR2 = %.5f\n",q,r);
    }
    return 0;
}

