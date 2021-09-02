#include <stdio.h>
#include <math.h>
int main()
{
    double discriminant, root1, root2, realpart, imgpart, a, b, c;
    printf("enter three numbers");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / 2 * a;
        root2 = (-b - sqrt(discriminant)) / 2 * a;
        printf("root1=%lf root2=%lf", root1, root2);
    }
    else if (discriminant < 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1=root2=%lf", root1); /* code */
    }
    else
    {
        realpart = -b / 2 * a;
        imgpart = sqrt(-discriminant) / (2 * a);
        printf("root1=%lf+%lf and root2=%lf-%lf", root1, root2, realpart, imgpart);
    }
}
