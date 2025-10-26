#include <stdio.h>
int main() {
    int electricity_units;// code to calculate electric bill based on units consumed
    float total_electricity_bill;

    printf("Please enter your electricity units consumed: ");
    scanf("%d", &electricity_units);

    if (electricity_units <= 100) {
        printf("Since units consumed are less than or equal to 100, Rupees1.5 per unit\n");
        total_electricity_bill = 1.5 * electricity_units;
    } 
    else if (electricity_units <= 200) {
        printf("Since units consumed are between 101 and 200, Rupees2 per unit for next 100 units\n");
        total_electricity_bill = (1.5 * 100) + (2 * (electricity_units - 100));
    } 
    else if (electricity_units <= 300) {
        printf("Since units consumed are between 201 and 300, Rupees3 per unit for next 100 units\n");
        total_electricity_bill = (1.5 * 100) + (2 * 100) + (3 * (electricity_units - 200));
    } 
    else {
        printf("Since units consumed are more than 300, Rupees5 per unit for remaining units\n");
        total_electricity_bill = (1.5 * 100) + (2 * 100) + (3 * 100) + (5 * (electricity_units - 300));
    }

    printf("The total electric bill is Rupees%.2f\n", total_electricity_bill);

    return 0;
}
