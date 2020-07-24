#include<stdio.h>

int main()
{
	float distance_in_km;
	float distance_in_m;
	float distance_in_feet;
	float distance_in_inch;
	float distance_in_cm;
	printf("Enter distance of two cities in km:");
	scanf("%f",&distance_in_km);
	distance_in_m = distance_in_km * 1000;	
	distance_in_cm = distance_in_m * 100;
	distance_in_inch = distance_in_cm / 2.54;
	distance_in_feet = distance_in_inch / 12;
	
	printf("Distance %f km \n",distance_in_km);
	printf("=%f \t meters\n",distance_in_m);
	printf("=%f \t centimeters\n",distance_in_cm);
	printf("=%f \t inches\n",distance_in_inch);
	printf("=%f \t feets\n",distance_in_feet);
	
	return 0;
	
}
