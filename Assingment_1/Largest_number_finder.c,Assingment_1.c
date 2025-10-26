#include <stdio.h>
int main(){
	float a,b,c;// code to determine largest of the three numbers entered
	printf(" Please enter three numbers: ");
	scanf("%f %f %f",&a, &b, &c);
	if(a>b && a>c){
		printf("%f is the largest of the three numbers",a);
	}
	else if(b>a && b>c){
		printf("%f is the largest of the three numbers",b);
	}
	else{
		printf("%f is the largest of the three numbers",c);
	}
	return 0;
}