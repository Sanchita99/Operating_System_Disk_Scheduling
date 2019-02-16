#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,s=0,p;
	printf("Enter number of tracks\n");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter track numbers\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter track position\n");
	scanf("%d",&p);
	
	for(i=0;i<n;i++)
	{
		s=s+(abs(p-a[i]));
		p=a[i];
	}
	
	printf("Total track movements:%d",s);
	
}
