#include <stdio.h>
int main(){
	int year;//code to find leap year,leap year is amultiple of 4 or 400
	printf("Enter your desired year: ");
	scanf("%d",&year);
	if(year %4 == 0){
		printf("The following year,%d is a leap year",year);
	}
	else if(year %400 == 0){
		printf("The following year,%d is a leap year",year);
	}
	else{
		printf("The following year,%d is not a leap year",year);
	}
	return 0;
}
	