#include<stdio.h>
#include<time.h>
int a[100],min, max;
void div(int,int);
main()
{
	int i,n,st,et;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ele",i+1);
		scanf("%d",&a[i]);
	}
	st=clock();
	div(0,n-1);
	et=clock();
	printf("%d is min\n %d is max\n",min, max);
	printf("%f is time\n",(float)(et-st)/CLK_TCK);
	return 0;
}
void div(int first,int last)
{
	int i,j,mid,min1,min2,max1,max2;
	i= first;
	j= last;
	if(i==j)
	min=max=a[i];
	else if(i==j-1)
	{
		if(a[i]>a[j])
		{
		max=a[i];
		min=a[j];
	    }
		else
		{
		max=a[j];
		min=a[i];
	    }
	}
	else
	{
		mid=(i+j)/2;
		div(first,mid);
		min1=min;
		max1=max;
		div(mid+1,last);
		min2=min;
		max2=max;
		if(min1<min2)
		min=min1;
		else
		min=min2;
		if(max1>max2)
		max=max1;
		else 
		max=max2;
	}
}

