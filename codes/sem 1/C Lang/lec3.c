#include <stdio.h>
int main()
{
    float l, b, a, s, h, r;
    printf(" enter the all values");

    scanf("%f",&l);
    scanf("%f",&b);
    scanf("%f",&a);
    scanf("%f",&s);
    scanf("%f",&h);
    scanf("%f",&r);

    printf("area of circle\n");
    printf("%f\n", 3.14 * r * r);

    printf("area of square\n");
    printf("%f\n", s * s);

    printf("volume of cuboid\n");
    printf("%f\n", l * b * h);

    printf("volume of cylinder\n");
    printf("%f\n", 3.14 * r * r * h);

    printf("volume of cube\n");
    printf("%f\n", a * a * a);

    printf("volume of sphere\n");
    printf("%f\n", 1.33 * 3.14 * r * r * r);
    
    

}