
#include<stdio.h>
#include<math.h>
#define e 0.00001
#define f(x) (x*x*x-2*x-5)

int main()
{
    float a,b,c;
    int i=1;
    printf("enter the initial guess  a and b:\n");
    scanf("%f%f",&a,&b);
    if(f(a)*f(b)<0)
    {
 do
    {
        c = (a*f(b) - b*f(a))/ (f(b) - f(a));
        printf("i=%d | a=%.4f | b=%.4f | c=%.4f | f(a)=%.4f  | f(b)=%.4f | f(c)=%.4f",i,a,b,c,f(a),f(b),f(c));
        printf("\n");

            a=b;
            b=c;
        i++;
    }while(fabs(f(c))>e);
    printf("\n");
    printf("root is:%.4f",c);
    }
    else
    {
        printf(" root not exist ");
    }
    return 0;
}

