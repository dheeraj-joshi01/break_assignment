/*program to calculate total marks and percentage of 3 subjects*/

#include<stdio.h>
typedef float f; 			//define float as 'f'

int calculate(f, f, f);			//function declaration

int main()
{
	f s1, s2, s3;
	
	printf("Enter marks of 3 subjects (out of 100)\n");
	scanf("%f%f%f", &s1, &s2, &s3);		//taking marks as input
	
	//function calling
	calculate(s1, s2, s3);
	
	return 0;
}

int calculate(f sub1, f sub2, f sub3)		//function defination
{
	f total, percent;
	
	total = sub1+sub2+sub3;
	percent = (total/300)*100;		//percentage calculation
	
	printf("Total marks : %0.3f\nPercentage : %0.3f % \n", total, percent);
	
	return 0;
	
}
