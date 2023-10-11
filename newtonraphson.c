#include<stdio.h>
#include<math.h>
#define e 0.0001
#define f(x) (x*x*x-2*x-5)
#define f1(x) (3*x*x-2)

int main()
{
    float a,b,c,xnext;
    int i=1;
    printf("enter the values of a and b:\n");
    scanf("%f%f",&a,&b);
    if(f(a)*f(b)<0)
    {
    if(fabs(f(a))<fabs(f(b)))
    {
        c=a;
    }
     else
    {
         c=b;
    }
    do
        {
         xnext = c - f(c) / f1(c);

printf("Iteration %d | c=%.4f | f(c)=%.4f | f'(c)=%.4f | x_next=%.4f\n",i, c, f(c), f1(c), xnext);
        c = xnext;
        i++;

    } while (fabs(f(xnext)) > e);
    printf("Root is approximately %.4f\n", xnext);
}
    else{
        printf("not exist");
    }

    return 0;

}
