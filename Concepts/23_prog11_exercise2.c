/*
Author: Ishan S.
Date: 13th April 2024
Objective: To develop a program for unit conversion
*/

/*
kms to miles
inches to foot
cms to inches
pound to kgs
inches to metres
*/

#include <stdio.h>

int m_to_km(float n){

    float var = n;
    printf("Entered value is: %f m \n",var);

    float conv = var / 1000;

    return conv;
}

int km_to_m(float n){

    float var = n;
    printf("Entered value is: %f km \n",var);

    float conv = var * 1000;
    return conv;
}

int main(){
    float result = m_to_km(1000);
    printf("Result for metre to km conversion is: %f km \n",result);

    float result2 = km_to_m(2.5);
    printf("Result for kilometre to metre conversion is: %f m \n",result2);
    return 0;
}