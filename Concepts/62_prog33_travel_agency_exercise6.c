/*
Author: Ishan S.
Date: 26th April 2024
Objective: Perform Exercise Number 6 - Travel Agency Code
*/

/*
Input of all drivers:
1. Driver's Name
2. Driver's License
3. Route
3.1 Source
3.2 Destination
4. Km's
4.1 Driven today
4.2 Will be driving more miles today
*/

/*
Print all the details of all the details -> Create Structures 
*/

#include <stdio.h>
#include <string.h>

typedef struct driver_db
{
    char drivers_name[20];
    int driver_license[20];
    char route_source[4];
    char route_destination[4];
    int miles_driven[10];
    int miles_more_to_go[10];
} driverdb;

void driverdb_dev(int n){

    int number_of_drivers = n;
    char drivers_name[20];
    char route_source[4];
    char route_destination[4];

     driverdb s[number_of_drivers];

    for(int i =0; i < number_of_drivers; i++){
       
        printf("Enter driver's name: \n");
        scanf("%s",drivers_name);
        strcpy(s[i].drivers_name, drivers_name);

        printf("Enter driver's License Number (Numeric digits only): \n");
        scanf("%d",s[i].driver_license);

        printf("Enter Journey details: \n");
        printf("Source(Write three digit code): ");
        scanf("%s",route_source);
        strcpy(s[i].route_source, route_source);
        printf("\n");

        printf("Enter Journey details: \n");
        printf("Destination(Write three digit code): ");
        scanf("%s",route_destination);
        strcpy(s[i].route_destination, route_destination);
        printf("\n");

        printf("Enter miles driven today: \n");
        scanf("%d",s[i].miles_driven);
        printf("\n");

        printf("Enter miles more to be driven today: \n");
        scanf("%d",s[i].miles_more_to_go);
        printf("\n");

        printf("\n****************************************************************\n");
        printf("**Driver Database**\n");
        printf("****************************************************************\n");
        printf("Driver [%d] details:\n", i);
        printf("Driver's name: %s\n",s[i].drivers_name);
        printf("Driver's License Number: %d\n",*(s[i].driver_license));
        printf("Joruney Details: Source : %s to Destination: %s\n",s[i].route_source,s[i].route_destination);
        printf("Driver has driven by now: %d miles. Miles left for the day: %d miles \n",*s[i].miles_driven,*s[i].miles_more_to_go);
        printf("****************************************************************\n");
        printf("****************************************************************\n");

    }

    // printf("\n*****\n");
    // printf("**Driver Database**\n");
    // printf("Total number of Driver's in the database: %d \n", number_of_drivers);
    //  printf("\n*****\n");
    // for (int j =0; j < number_of_drivers; j++){
    //     printf("Driver [%d] Details \n",j);
    //     printf("Driver Name : %s", s[j].drivers_name)
    // }
}

int main(){

    driverdb_dev(1);
    return 0;
}