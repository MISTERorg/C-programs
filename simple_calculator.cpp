#include <stdio.h>
int main(){
	float a,b,c;
	printf("enter first value:\t");
	scanf("%f",&a);
	printf("enter second value:\t);
	scanf("%f",&b);
	c=a+b;
	printf("the addition is %.1f \n",c);
		c=a-b;
	printf("the substraction  is %.1f \n",c);
	if (b!=0){
		c=a/b;
		printf("the divition is %.1f\n ",c);
		
	}
	else{
		printf("can't divide by zero\n");
	}
		c=a*b;
	printf("the multiplication  is %.1f\n ",c);
	
	
	return 0;
	
		
}
