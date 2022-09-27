#include <stdio.h>
#include <math.h>
void dia(float);
void area(float);
void circum(float);
int main(){
    float r;
    printf("Enter radius : ");
    scanf("%f", &r);
    dia(r);
    area(r);
    circum(r);
}
void dia(float a){
    printf("Diameter is : %0.2f\n", 2*a);
}
void area(float a){
    printf("Area is : %0.2f\n", 3.14*a*a);
}
void circum(float a){
    printf("Circumference is : %0.2f", 2*a*3.14);
}