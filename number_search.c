/* program to search a number in the array and print the sequence */
#include<stdio.h>

// function declaration
int search_num(int [], int);		
int print_seq(int []);

//main function
int main()
{
	int opt, num;
	int arr[] = {1,5,4,8,9,2,0,6,11,7};		//array declaration
	
	printf("select the operation you want to perform\n");
	printf("1. search a no. in array\n2. print sequence\n");		//printing operation menu
	
	scanf("%d", &opt);			//taking option as inout from user
	
	switch(opt)
	{
		case 1:
		printf("Enter a number you want to search in array\n");
		scanf("%d", &num);
		search_num(arr, num);		//search function call
		break;
		
		case 2:
		printf("The sequence is:\n");
		print_seq(arr);			//print sequence
		break;
		
	}
	
	return 0;
}


//fucntion defination

int search_num(int arr[], int n)			//function to search number 'n' in array 'arr[]'
{
	int flag = 0;
		
	//scanning the array
	for(int i = 0; i<10; i++)
	{
		if(arr[i] == n)
		{
			flag += 1;
		}
	}
	
	(flag == 0) ? printf("NO\n") : printf("YES\n");		//printing result
	
	return 0;	
}

int print_seq(int arr[])
{
	for(int i = 0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	
	printf("\n");
}
