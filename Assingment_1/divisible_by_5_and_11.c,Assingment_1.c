#include <stdio.h>
int main(){
	int n;//code to check if a number is both divisible by both 5 and 11
	printf("Please enter a number: ");
	scanf("%d",&n);
	if(n % 5 == 0 && n % 11 == 0){
		printf("The number %d, is divisible by both 5 and 11",n);
	}
	else{
		printf("The number %d, is not divisible by both 5 and 11",n);
	}
	return 0;
}
