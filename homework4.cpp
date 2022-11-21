#include <stdio.h>
int main(){
	int a,b;
	printf("enter the number to display the multiplication table:  ");
	scanf("%i",&a);
	printf("enter the ending multiple:  ");
	scanf("%i",&b);
	for (int i=0;i<=b;i++){
		printf(" %i multiplied by %i is: %i\n",a,i,a*i);
	}
	return 0;
}
