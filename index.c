#include <stdio.h>
#include <math.h>


int main() {
double surfaceArea = 0.0; 
    double volume = 0.0;
    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.141592653589793;

    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);

    area = PI * pow(radius, 2);
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

surfaceArea = 4 * PI * pow(radius, 2);
volume = (4.0/3.0) * PI * pow(radius, 3);



return 0;
}