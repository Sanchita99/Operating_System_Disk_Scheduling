#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int main()
{
	int n,p,i,j,min,k,s=0;
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
	
	for(i=0;i<n;i++)
	{
		min=INT_MAX;
		for(j=0;j<n;j++)
		{
			if(abs(p-min)>(abs(p-a[j])))
			{
				min=a[j];
				//printf("min:%d diff:%d\n",min,abs(p-a[j]));
				k=j;
			}
		}
		s=s+abs(p-a[k]);
		//printf("%d\n",a[k]);
		p=a[k];
		//printf("p:%d \n",p);
		a[k]=INT_MAX;
	}
	printf("Total number of track movements:%d\n",s);
	
}
