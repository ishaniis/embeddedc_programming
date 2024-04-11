
/*
Author: Ishan S.
Date: 10th April 2024
Objective: Discussion around Switch-case statements
*/

#include <stdio.h>

int main(){
    int vehicle_speed;

    printf("Enter the vehicle speed: \n");
    scanf("%d",&vehicle_speed);

    printf("Vehicle speed entered by the user is: %d \n",vehicle_speed);

    switch (vehicle_speed)
    {
    case 20:
        printf("Adaptive Cruise Control can be engaged \n");
        break;
    
    case 10:
        printf("Vehicle speed is too loo, for the ACC to be engaged \n");
        break;
    
    case 30:
        printf("ACC can be engaged successfully \n");

    default:
        printf("ACC is engaged successfully \n");
        break;
    }

    return 0;
}