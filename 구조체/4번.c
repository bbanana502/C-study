#include<stdio.h>
#include<math.h>
struct point{
    int x;
    int y;
};

int main(void)
{
    struct point p1;
    struct point p2;
    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);

    double xl = p1.x - p2.x;
    double yl = p1.y - p2.y;

    xl = xl*xl;
    yl = yl*yl;

    double result = xl + yl;
    result = sqrt(result);
    printf("%.2lf", result);

}