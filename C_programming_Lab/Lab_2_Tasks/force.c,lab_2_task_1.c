#include <stdio.h>
int main(){
	float m;
	printf("Enter the value of mass(kgs): "); // in kg
	scanf("%f",&m);
	float a;
	printf("Enter the value of acceleration(m/s^2): "); // in m/s^2
	scanf("%f",&a);
	float force= m*a;
	printf("the resultant force is %f newtons",force);
	
} 