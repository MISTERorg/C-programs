#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 numbers \n");
	scanf("%i%i%i",&a,&b,&c);
	if(a>b && a>c){
		printf("the largest is %i\n",a);
		if(b>c){
			printf("the smallest is %i\n",c);
		}else{
			printf("the smallest is %i\n",b);
		}
	}
	else if(b>a && b>c){
		printf("the largest is %i\n",b);
		if(a>c){
			printf("the smallest is %i\n",c);
		}else{
			printf("the smallest is %i\n",a);
		}
	}
	else{
		printf("the largest is %i\n",c);	
		if(b>a){
			printf("the smallest is %i\n",a);
		}else{
			printf("the smallest is %i\n",b);
		}
	}
	

}
