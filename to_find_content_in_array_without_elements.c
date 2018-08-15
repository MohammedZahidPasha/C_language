//c program to find the content present in the array position whose value is not initialised by the user
#include<stdio.h>
void main()
{
	int a[10],i,n,t;
	printf("Enter the number of elements in an array ?\n");
	scanf("%d",&n);
	printf("Enter %d elements of an array :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search element :\n");
	scanf("%d",&t);
	printf(" %d is the content at %d",a[t],t);
}
