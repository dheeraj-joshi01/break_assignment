/*program for calculation of final salary of an employee using OOPs*/
#include<iostream>
using namespace std;

//class defination
class Employee
{
	public:
	
	int salary, hours;
	
	int getInfo(int slry, int hrs)			//function to take info of employee
	{
		salary = slry;
		hours = hrs;
		
		return 0;
	}
	
	int AddSal()			//addSal function defination
	{
		if(salary < 500)
		{
			salary += 10;
		}
	
		return 0;
	}
	
	int AddWork()			//addWork function defination
	{
		if(hours > 6)
		{
			salary += 5;
		}
	
		return 0;
	}
	
	int finalSal(Employee emp)		//function to print final salary
	{
		printf("Final salary of the employee is : %d\n", emp.salary);
		
		return 0;
	}

};	//end of class Employee

//main function
int main()
{
	Employee sam;			//object declaration
	int slry, hrs;
	
	//taking employee info as input
	printf("Enter Employee's salary and number of hours of work per day:\n");
	scanf("%d%d", &slry, &hrs);
	
	//calling class functions
	
	sam.getInfo(slry, hrs);
	sam.AddSal();
	sam.AddWork();
	sam.finalSal(sam);
	
	return 0;
}
