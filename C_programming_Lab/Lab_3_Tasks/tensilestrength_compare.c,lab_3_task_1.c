#include <stdio.h>
int main(){
	float strength1, strength2;
	printf("Enter the tensile strength of material1: ");
	scanf("%f",&strength1);
	printf("Enter the tensile strength of material2: ");
	scanf("%f",&strength2);
	if(strength1>strength2){
		printf("Material1 has higher tensile strength than material2");
	}
	else{
		printf("Material2 has higher tensile strength than material1");
	}
	return 0;
}