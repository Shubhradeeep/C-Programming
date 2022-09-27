#include <stdio.h>

float area(float radius);

int main() {

   float radius;

   printf("Please enter the radius of the circle: ");

   scanf("%f", &radius);



}


float area(float radius) {

   float PIE = 3.141;

   float area = 0;

   area = PIE * radius * radius;

   printf("Area of circle : %f\n", area);
   
  return area;
}
