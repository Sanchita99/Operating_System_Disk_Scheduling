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
	
	min=INT_MAX;
	if(ch==1)
	{
		for(i=0;i<n;i++)
		{
			if(min>a[i])
				min=a[i];
		}
		//printf("%d\n%d\n",min,t-p);
		s=t-p+abs(t-min);	
	}
	else
	{
		min=INT_MIN;
		for(i=0;i<n;i++)
		{
			if(min<a[i])
				min=a[i];
		}
		//printf("%d\n%d\n",min,t-p);
		s=p+min;	
	}
	
	printf("Total number of track movements:%d\n",s);
	
}
