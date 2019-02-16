#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,p,i,j,min,max,k,s=0;
	printf("Enter number of tracks\n");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter track numbers\n");
	for(i=0;i<n;i++)gt6
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter track position\n");
	scanf("%d",&p);
		
	min=INT_MAX;
	max=INT_MIN;
		for(i=0;i<n;i++)
		{
			if(min>a[i])
				min=a[i];
			if(max<a[i])
				max=a[i];
		}
		//printf("%d\n%d\n",min,t-p);
		s=max-min+abs(max-p);	
	
	
	printf("Total number of track movements:%d\n",s);
	
}
