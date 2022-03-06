/************ Generate binary numbers between 1 to `n` using a queue ***************/

#include<stdio.h>

int enqueue(char [], int *, int *, char, int);
void display(char [], int *, int *);

int main()
{
	int n, i, j, front=0, rear=0, temp=0;
	char b='0';
	
	printf("Enter the number to generate binary: \n");
	scanf("%d", &n);

	int l = n*5;
	printf("length: %d\n",l);

	char queue[l+1];

	for(i=1; i<=n; ++i)
	{
		temp = i;
		while(temp>0)
		{
			b = (temp%2) + '0';
			enqueue(queue, &front, &rear, b, l);
			temp = temp/2;
		}
		enqueue(queue, &front, &rear, ' ' , l);
	}

	printf("Binary numbers in queue are \n");
	display(queue, &front, &rear); 

	return 0;
}

int enqueue(char s[], int *f, int *r, char x, int n)
{
	if(*r >= n)
	{
		printf("Stack overflow\n");
		return 0;
	}
	else
	{
		*r = *r + 1;
		printf("r=%d\n",*r);

		s[*r] = x;

		if(*f == 0)
		{
			*f = *f+1;
			printf("f=%d\n",*f);
		}

		return 1;
	}
}

void display(char s[], int *f, int *r)
{
	int i;

	for(i=*f; i<=*r; i++)
	{
		printf("%c",s[i]);
	}
}
