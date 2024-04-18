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

int km_to_miles(float n){
    // TODO
    return 0;
}

int inches_to_foot(float n){
    // TODO
    return 0;
}

int cm_to_inches(float n){
    // TODO
    return 0;
}

int lbs_to_kg(float n){
    // TODO
    return 0;
}

int inchese_to_metres(float n){
    // TODO
    return 0;
}


int main(){
    // float result = m_to_km(1000);
    // printf("Result for metre to km conversion is: %f km \n",result);

    // float result2 = km_to_m(2.5);
    // printf("Result for kilometre to metre conversion is: %f m \n",result2);

    //Let's make the menu program

    int input_menu_var;


   
    switch(input_menu_var){

        case 'q':
            goto end;

        case '1':{
            km_to_miles(10);
        }

        case '2':

        {
            inches_to_foot(10);
        }
    
        case '3':
        {
            lbs_to_kg(10);
        }
            
        case '4':
        {
            inches_to_metres(10);
        }
   }
    end:
        printf("Out of the switch case.");

    return 0;
}