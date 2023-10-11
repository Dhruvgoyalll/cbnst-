#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, dis, root1, root2, ipart, rpart;
    printf("Enter the values of three coefficients:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

  dis=b*b-4*a*c;

    // condition for real roots
    if (dis > 0) {
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("root1 = %d and root2 = %d", root1, root2);
    }

    // condition for equal roots
    else if (dis == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %d;", root1);
    }

    // if roots are not real complex and imaginary
    else {
        rpart = -b / (2 * a);
        ipart= sqrt(-dis) / (2 * a);
        printf("root1 = %d+%d and root2 = %d-%d", rpart, ipart, rpart, ipart);
    }

    return 0;

}
