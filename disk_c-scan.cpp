#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,p,i,j,min,k,s=0,t,ch;
	printf("Enter number of tracks\n");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter track numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter track position\n");
	scanf("%d",&p);
	
	printf("Enter total tracks\n");
	scanf("%d",&t);
	
	printf("Enter direction: 1 for up or 2 for down\n");
	scanf("%d",&ch);
	
	
	if(ch==1)
	{	
		min=INT_MIN;
		for(i=0;i<n;i++)
		{
			if(a[i]<p&&min<a[i])
				min=a[i];
		}
		//printf("%d\n%d\n",min,t-p);
		s=t-p+min+t;	
	}
	else
	{
		min=INT_MIN;
		for(i=0;i<n;i++)
		{
			if(a[i]>p&&min<a[i])
				min=a[i];
		}
		//printf("%d\n%d\n",min,t);
		s=p+min+t;	
	}
	
	printf("Total number of track movements:%d\n",s);
	
}
