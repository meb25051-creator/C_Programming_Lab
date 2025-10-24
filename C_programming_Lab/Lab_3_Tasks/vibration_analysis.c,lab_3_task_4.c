#include <stdio.h>
int main(){
	float amplitude, frequency;
	printf("Enter the required amplitude(mm): ");  
	scanf("%f",&amplitude);
	printf("Enter the required frequency(Hz): ");  
	scanf("%f",&frequency);
	if(amplitude>0.5 && frequency>=20 && frequency<=50){
		printf("Status:High Risk");
	}
	else if(amplitude>0.5 || frequency>60){
		printf("Status:Medium Risk");
	} 
	else{
		printf("Status:Low Risk");
	}
	return 0;
}