/*******************************************************************************
In-place merging of two sorted arrays.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int m,n,p,temp;
    
    printf("Enter the size of 1st array: ");
    scanf("%d",&m);
    printf("Enter the size of 2nd array: ");
    scanf("%d",&n);

    p = m + n;
    
    int a1[m];
    int a2[n];
    int i,j;

//taking input in array

    for(i=0;i<m;i++)
    {
        printf("Element of 1st array [ %d ]: ",i);
        scanf("%d",&a1[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("Element of 2nd array [ %d ]: ",i);
        scanf("%d",&a2[i]);
    }

    printf("Before Sorting\n");

    printf("\nThe 1st array is: ");
    for(i=0;i<m;i++)
    {
        printf("%d ",a1[i]);
    }

    printf("\nThe 2nd array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a2[i]);
    }
    printf("\n");

    int merge[p];
    
    //merging arrays
    
    for(i=0;i<m;i++)
    {
        merge[i] = a1[i];
    }
    
    for(i=0,j=m;j<p && i<n;i++,j++)
    {
        merge[j]=a2[i];
    }

    printf("Merged array: ");
    
    for(i=0;i<p;i++)
    {
        printf("%d ",merge[i]);
    }
    
    printf("\n");

    for(i=0;i<p;i++)
    {
        for(j=i+1;j<p;j++)
        {
            if(merge[i]>merge[j])
            {
                temp =merge[i];
                merge[i]=merge[j];
                merge[j]=temp;
            }
        }
    }

//sorting array

    printf("\nAfter Sorting\n");
    
    printf("The sorted array is : ");
    for(i=0;i<p;i++)
    {
        printf("%d ",merge[i]);
    }
    printf("\n");

    for(i=0;i<m;i++)
    {
        a1[i]=merge[i];
    }
    

    printf("The 1st array after sorting: ");
    for(i=0;i<m;i++)
    {
        printf("%d ",a1[i]);
    }
    printf("\n");
    for(i=0,j=m;i<n,j<p;i++,j++)
    {
        a2[i]=merge[j];
    }

    printf("The 2nd array after sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a2[i]);
    }
    
    printf("\n");
    return 0;
}
