#include<stdio.h>

int main()
{
	int marks_in_sub_1;
	int marks_in_sub_2;
	int marks_in_sub_3;
	int marks_in_sub_4;
	int marks_in_sub_5;
	int total;
	float percentage;
	// Take input
	printf("Enter marks of Subject 1:");
	scanf("%d",&marks_in_sub_1);
	if(marks_in_sub_1 <0 ||marks_in_sub_1 >100 )		// Close the program if marks do not lie in 0 to 100
		{
			printf("invalid input!!!\n");
			return 0;
		}
	printf("Enter marks of Subject 2:");
	scanf("%d",&marks_in_sub_2);
	if(marks_in_sub_2 <0 ||marks_in_sub_2 >100 )
		{
			printf("invalid input!!!\n");
			return 0;
		}
	printf("Enter marks of Subject 3:");
	scanf("%d",&marks_in_sub_3);
	if(marks_in_sub_3 <0 ||marks_in_sub_3 >100 )
		{
			printf("invalid input!!!\n");
			return 0;
		}
	printf("Enter marks of Subject 4:");
	scanf("%d",&marks_in_sub_4);
	if(marks_in_sub_4 <0 ||marks_in_sub_4 >100 )
		{
			printf("invalid input!!!\n");
			return 0;
		}
	printf("Enter marks of Subject 5:");
	scanf("%d",&marks_in_sub_5);
	if(marks_in_sub_5 <0 ||marks_in_sub_5 >100 )
		{
			printf("invalid input!!!\n");
			return 0;
		}
	total = marks_in_sub_1 + marks_in_sub_2 + marks_in_sub_3 + marks_in_sub_4 + marks_in_sub_5;
	percentage = (total / 500.0 ) * 100 ;
	printf("Total marks of student is:%d\n",total);
	printf("Percentage marks is:%f\n",percentage);
	
	return 0;
	
}
