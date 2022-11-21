#include <stdio.h>
#include <math.h>
int main(){
	float r,pi=3.141593;
	printf("enter the radius of your circle");
	scanf("%f",&r);
	float r1 = pi*r*r;
	printf("the area of the circle is : %.3f ",r1);
	float r2 = 2*pi*r;
	printf("the circumference of the circle is : %.3f ",r2);
}
