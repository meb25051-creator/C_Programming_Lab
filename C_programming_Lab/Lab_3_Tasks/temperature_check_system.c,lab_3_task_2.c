#include <stdio.h>
int main(){
    float a;
    printf(" Enter the machine temperature in celsius: ");
    scanf("%f", &a);
    if(a>60 && a<= 82){
                 printf(" The temperature is in safe range ");
    }else{
          printf(" warning! your temperature is not in the safe range");
          }
    return 0;
}   
  
