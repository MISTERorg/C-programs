#include <stdio.h>
int main(){
	char firstLetter ='A';
	char firstSmallLetter ='a';
	char lastLetter ='Z';
	char lastSmallLetter ='z';
	printf("upper case letter between (and with) %c and %c id : %d\n",firstLetter,lastLetter,lastLetter-firstLetter+1);
	printf("lower case letter between (and with) %c and %c id : %d\n",firstSmallLetter,lastSmallLetter,lastSmallLetter-firstSmallLetter+1);
	return 0;

}
