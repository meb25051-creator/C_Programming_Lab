#include <stdio.h>
int main(){
	float applied_external_stress, material_yeild_strength, factor_of_safety;
	printf("Enter the required applied_external_stress(Mpa): ");  
	scanf("%f",&applied_external_stress);
	printf("Enter the required material's yeild strength(Mpa): ");  
	scanf("%f",&material_yeild_strength);
	factor_of_safety = material_yeild_strength/applied_external_stress;
	printf("Factor of safety is %f",factor_of_safety);
	if(factor_of_safety>=2.0){
		printf("\nStatus: SAFE DESIGN");
	}
	else if(factor_of_safety>=1.5 && factor_of_safety<=2.0){
		printf("\nStatus: ACCEPTABLE WITH MONITORING");
	}
	else{
		printf("\nStatus: DANGER!! REDESIGN NEEDED");
	}
	return 0;
}