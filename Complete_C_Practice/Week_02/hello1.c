/*Write Program, which reads a, b and c as sides of a triangle and
prints area. Hint: area = s* (s-a)*(s-b)*(s-c).*/
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle is: %.2f", area);

    return 0;
}