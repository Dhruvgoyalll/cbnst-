#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) 2*x-log10(x)-7                                             // equation
#define p(x) (7+log10(x))/2                                           // in terms of x
#define pp(x) (log10(e)) /(2*x)                                    // differentiation of p(x)
void iterative(float,float,float);
int main()
{
float x0, x1, f0, f1, e;
up:
printf("Enter two initial guesses for the interval:\n");
scanf("%f %f", &x0, &x1);
printf("Enter tolerable error:\n");
scanf("%f", &e);
f0= f(x0);
f1 = f(x1);
if(f0*f1> 0.0)
{
printf("Incorrect Initial Guesses\n");
goto up;
}
iterative(x0,x1,e);
}
void iterative(float a0,float a1,float e)
{
float x0,Q,f0;
up:
printf("\nEnter value to put in pp(x) to apply iteration method: ");
scanf("%f",&x0);
Q=pp(x0);
if(fabs(Q)>1)
{
printf("Try another value in the interval %f to %f",a0,a1);
goto up;
}
int itr=0;
do
{
x0=p(x0);
f0=f(x0);
itr=itr+1;
printf("\nThe root is %f at %d iteration",x0,itr);
}
while(fabs(f0)>e);
printf("\nThe final root is %f at %d iteration",x0,itr);
}
