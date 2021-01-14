#include<stdio.h>
int main()
{
    double a, b, c, d, e, f, t;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a<c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b<c)
    {
        t=b;
        b=c;
        c=t;
    }
    d = a*a;
    e = b*b;
    f = c*c;
    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(d==(e+f))printf("TRIANGULO RETANGULO\n");
        if(d>(e+f))printf("TRIANGULO OBTUSANGULO\n");
        if(d<(e+f))printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c)printf("TRIANGULO EQUILATERO\n");
        else if(a==b || b==c || a==c)printf("TRIANGULO ISOSCELES\n");
    }
    return 0;


}
