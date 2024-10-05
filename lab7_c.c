#include <stdio.h>
#include <math.h>
int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    double c = sqrt((x*x) + (y*y));
    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf\n", x, y, c);
    return 0;
}