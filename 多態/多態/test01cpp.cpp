#include <stdio.h>
#define pi 3.14
float x, y, r;
float area_of_rectangle, area_of_triangle, area_of_circle;
void calculate_area_of_rectangle(void);
void calculate_area_of_triangle(void);
void calculate_area_of_circle(void);

void
calculate_area_of_rectangle() {
    scanf_s("%f%f", &x, &y);
    area_of_rectangle = x * y;
    printf("The area of the rectangle is %f", area_of_rectangle);
}

void
calculate_area_of_triangle() {
    scanf_s("%f%f", &x, &y);
    area_of_triangle = (x * y) / 2;
    printf("The area of the triangle is %f", area_of_triangle);
}
void
calculate_area_of_circle() {
    scanf_s("%f", &r);
    area_of_circle = pi * r * r;
    printf("The area of the circle is %f", area_of_circle);
}

int main(void) 
{
    int selection;

    printf("Please select the shape you want to calculate by entering the Numbers before it.\n");
    printf("1.Rectangle;\n2.Triangle;\n3.Circle\n");
    scanf_s("%d", &selection);
    if (selection == 1)
    {
        calculate_area_of_rectangle();
    }
    if (selection == 2)
    {
        calculate_area_of_triangle();
    }
    if (selection == 3)
    {
        calculate_area_of_circle();
    }
    return 0;
}
