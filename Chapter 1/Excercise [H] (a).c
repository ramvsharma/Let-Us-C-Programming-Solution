#include<stdio.h>

int main()   
{
	float basic_salary;    
	float dearness = 0.40;  																	//Dearness is 40%
	float house_rent_allowance = 0.20;  														//House rent allowence is 20%
	float gross_salary;
	printf("Enter Ramesh's basic salary:");		
	scanf("%f",&basic_salary);																	//take basic salary
	gross_salary = basic_salary + dearness*basic_salary + house_rent_allowance*basic_salary;    //calculate gross_salary
	printf("Gross salary of Ramesh is:%f\n",gross_salary);
	return 0;
}
