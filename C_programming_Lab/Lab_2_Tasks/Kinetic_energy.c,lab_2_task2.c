#include <stdio.h>
int main(){
    float v;
    printf("Enter the value of velocity (m/s): ");
    scanf("%f", &v);

    float m;
    printf("Enter the value of mass (kg): ");
    scanf("%f", &m);

    float kinetic_energy = 0.5 * m * v * v;
    printf("The required kinetic energy is %f", kinetic_energy);

    return 0;
}