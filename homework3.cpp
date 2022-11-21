#include <stdio.h>

int main(){
	float a;
	printf("input a number:\t");
	scanf("%f",&a);
	if (a>0){
		printf("it is a positive number");
	}
	else if (a<0){
		printf("it is a negative number");
	}
	else{
		printf("your number is zero");
	}
	
}
