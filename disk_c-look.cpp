#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,p,i,j,min,lmin,max,k,s=0;
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
		
	min=INT_MAX;
	lmin=INT_MIN;
	max=INT_MIN;
		for(i=0;i<n;i++)
		{
			if(a[i]<min)
				min=a[i];
			if(a[i]<p&&lmin<a[i])
				lmin=a[i];
			if(max<a[i])
				max=a[i];
		}
		printf("%d\n%d\n%d\n",min,lmin,max);
		s=max-min+abs(max-p)+lmin-min;	
	
	
	printf("Total number of track movements:%d\n",s);
	
}
