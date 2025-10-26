#include <stdio.h>
int main(){
	int number;// code to find nature of a number
	printf("Enter a number(positive/negative/zero): ");
	scanf("%d",&number);
	if(number>0){
		printf("The number you entered,%d is a positive number",number);
	}
	else if(number<0){
		printf("The number you entered,%d is a negative number",number);
	}
	else{
		printf("The number you entered is zero");
	}
	return 0;
	}



