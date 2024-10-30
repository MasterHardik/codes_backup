//5.Program to accept the value of radius and print area of circle.

#include<stdio.h>
#include<math.h>
int main(){
float r,area;
printf("\n\t\tProgram to accept the value of radius and print area of circle");
printf("\n\nEnter the value of radius : ");
scanf("%f",&r);

area = (3.14)*r*r;
printf("Area of the circle is : %.10f",area);

}