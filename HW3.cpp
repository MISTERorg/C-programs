#include <stdio.h>
int main(){
	int a,b,c,d,e,f;
	printf("enter the starting point: ");
	scanf("%i",&a);
	printf("enter the ending point: ");
	scanf("%i",&b);
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	if(a<=2 && b>=3){
		printf("2,3,");
	}

	else if(a==3){
		printf("3,");
	}

		for(d=1;d>0;d++){
			e=6*d+1;
			f=6*d-1;
			for(int i=2;i<f;i++){
			if(f%i!=0){
				if(f>a && f<b){
				printf("%i,",f);
				}
			}
		}
		for(int i=2;i<e;i++){
			if(e%i!=0){
				if(e>a && e<b){
				printf("%i,",e);
				}
			}
		}
		
			
			if(f>b && e>b){
				break;
			}
		}
	

}
