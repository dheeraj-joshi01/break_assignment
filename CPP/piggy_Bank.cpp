/* program to add amount in piggy bank using constructor*/
#include<iostream>
using namespace std;

//class defination
class AddAmount
{
	public:
	
	int amount = 50;
	
	AddAmount()		//def constructor
	{
		amount;			//no change in amount
	}
	
	AddAmount(int new_amnt)		//param constructor
	{
		amount += new_amnt;
	}
		
	int finalAmount(AddAmount customer)		//function to print final amount
	{
		printf("Final amount in your piggy bank is : %d\n", customer.amount);
		
		return 0;
	}

};	//end of the class

//main function
int main()
{
	int amnt;
	
	//taking amount as input
	printf("Enter amount you want to credit\n");
	scanf("%d", &amnt);
	
	
	AddAmount shiv(amnt);		//object declaration
	
	//displaying account balance
	shiv.finalAmount(shiv);
		
	return 0;
}
