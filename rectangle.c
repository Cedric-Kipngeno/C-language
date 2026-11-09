#include <stdio.h>

int main(void) {
    float width, height;

printf("Width: ");
scanf("%f", &width);

printf("Height: ");
scanf("%f", &height);

float area = width * height;
float perimeter = 2 * (width + height);

    
printf("Area: %.2f\n", area);    
printf("Perimeter: %.2f\n", perimeter);

return 0;
}