#include <stdio.h>
#include <math.h>


int main() {

    double radius = 0.0;
    double area = 0.0;
    const PI = 3.141592653589793;

    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);

    area = PI * pow(radius, 2);
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}