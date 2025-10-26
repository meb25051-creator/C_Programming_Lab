#include <stdio.h>
int main(){
	int n;//code to calculate the sum of first n natural numbers
	int sum_of_first_n_natural_numbers;
	printf("Enter the number of natural numbers you want to add: ");
	scanf("%d",&n);
	sum_of_first_n_natural_numbers= (n*(n+1))/2;
	printf("Your required sum of first %d natural numbers is %d",n,sum_of_first_n_natural_numbers);
	return 0;
}