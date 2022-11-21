#include <stdio.h>

int main(void) {
    int mm,dd,yy, mm2, dd2, yy2,mt;

    printf("Please enter in first date (MM DD YYYY format): ");
scanf("%i%i%i",&mm,&dd,&yy);

    printf("Please enter in second date (MM DD YYYY format): ");
scanf("%i%i%i",&mm2,&dd2,&yy2);
  int yt=yy-yy2;
  yt*=365;
  if( mm2>12 or mm>12){
  	printf("invalid month");
  	return 0;
  }
  else if(mm==1 or 3 or 5 or 7 or 8 or 10 or 12 ){
  	mt=mm*31;
  }
   else if(mm==4 or 6 or 9 or 11 ){
  	 mt=mm*30;
  }
  else {
  	 mt=mm*29;
  }
  int dt=dd-dd2;
  printf("the days between the is : %i Days",yt+mt+dt);
  
  

    
    return 0;    
}
