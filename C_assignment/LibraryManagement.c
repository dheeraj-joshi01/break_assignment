/*menu driven program for library management*/

#include<stdio.h>
#include<string.h>
int count = 0;				//global variable to count no. of books in the library

//structure defination
struct library{

	//struct variable declaration

	int acc_no;
	char title[40];
	char author_name[30];
	int price;              
	int issued;                 //flag for issueing book

} book[100];	//declaration of struct variable;

//function declaration

int add_book();
int display_book_info(int);
int list_book_by_author(char []);
int list_title();
void list_books_order();
void count_books();

//main function
int main()
{
	//variable declaration	
	int opt, ac_no;
	int flag = 1;
	char author[30];
	
	printf("Welcome to Library Management System..!!!\n");

	//menu display and library operations
	
	while(flag != 0)
	{
		printf("\nSelect the operation you want to perform\n");

		//printing menu of operations on library
		printf("1. Add book info.\n2. Display book info.\n3. List all books of given author\n4. List the title of specified book\n5. List the count of books in the library\n6. List the book in order of accession number\n7. Exit\n");

		scanf("%d", &opt);          //taking input option 

		switch(opt)
		{
			case 1:             //add book info
			printf("Enter the following info:\n");
			add_book();
			break;

			case 2:            //display book info
			printf("Enter the accession number of book\n");
			scanf("%d", &ac_no);
			display_book_info(ac_no);
			break;

			case 3:             //list all book of given author
			printf("Enter name of author \n");
			scanf("%s", author);
			list_book_by_author(author);
			break;

			case 4:             //list title of specified book
			list_title();
			break;

			case 5:             //count the books in library
			count_books();
			break;

			case 6:             //list books in order of acc_no
			list_books_order();
			break;

			case 7:         //exit
			flag = 0;
			break;
			
		}
	}
	return 0;
}

//function definations

int add_book()        		//function for adding book info
{
	//adding book info
	
	printf("Accession number : ");
	scanf("%d", &book[count].acc_no);
	
	printf("Book Title (use '_' instead of <space>): ");
	scanf("%s", book[count].title);
	
	printf("Author Name (use '_' instead of <space>): ");
	scanf("%s", book[count].author_name);
	
	printf("Price : ");
	scanf("%d", &book[count].price);
	
	printf("If Book is issued enter '1', else enter '0' : ");
	scanf("%d", &book[count].issued);
	
	count++;		//increase count by 1
	
	return 0;
}


int display_book_info(int acNo)			//function to find book and display its info 
{
	int f=0;
	
	for(int i = 0; i <= count; i++)			//searching for book using accession no.
	{
		if(book[i].acc_no == acNo)	//if found, display book info
		{
			printf("Book Found\n");
			printf("Accession No. : %d\nTitle : %s\nAuthor : %s\nPrice (Rs.) : %d\nIssue status : %d\n", book[i].acc_no, book[i].title, book[i].author_name, book[i].price, book[i].issued);
			
			f=1;		//set flag
			break;
		}
	}
	
	if(f == 0)
		printf("Book Not Found\n");
	
	
	return 0;
}


int list_book_by_author(char author[])		//find and display books by specified author
{
	int f=0;
	
	for(int i = 0; i <= count; i++)			//searching for book of specified author
	{
		if(strcmp(book[i].author_name ,author) == 0)	//if found, display book info
		{
			
			printf("%s\n", book[i].title);
			f=1;		//set flag
		}
	}
	
	if(f == 0)
		printf("Book by %s Not Found\n", author);
			
	return 0;

}

int list_title()		//list the title of specified book
{
	int acNo, i;

	printf("Enter the accession number : \n");
	scanf("%d",&acNo);

	for(i=0; i<count; i++)			//search for acNo in library
	{
		if(acNo == book[i].acc_no)
		{
			printf("Book Found\n");
			printf("Title : %s\n", book[i].title);		//printf title of book
						
			break;
		}
	}
	
	return 0;
}

void count_books()			//count total books
{
	printf("Total number of books in library are: %d\n", count);
}

void list_books_order()			//list book in order of accession number
{
	int i,j, acc,temp=0;
	char str[20];

	for(j=0;j<count;j++)
	{
		for(i=j; i<count; i++)
		{
			if(book[j].acc_no > book[i].acc_no)
			{
				temp = book[j].acc_no;
				book[j].acc_no = book[i].acc_no;
				book[i].acc_no = temp;


				strcpy(str, book[j].title);
				strcpy(book[j].title, book[i].title);
				strcpy(book[i].title, str);


				strcpy(str, book[j].author_name);
				strcpy(book[j].author_name, book[i].author_name);
				strcpy(book[i].author_name, str);

				temp=0;
				temp = book[j].price;
				book[j].price = book[i].price;
				book[i].price = temp;

				temp=0;
				temp = book[j].issued;
				book[j].issued = book[i].issued;
				book[i].issued = temp;
			}
		}
	}

	for(i=0; i<count; i++)		//print book details
	{
		printf("Accession No. : %d\nTitle : %s\nAuthor : %s\nPrice (Rs.) : %d\nIssue status : %d\n",book[i].acc_no, book[i].title, book[i].author_name, book[i].price, book[i].issued);
		
	}

}
