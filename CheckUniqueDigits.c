#include<stdio.h>
int main()
{
	int a[9] = {0},r,n,f,m;
	printf("Enter a number : ");
	scanf("%d",&n);
	m = n;
	f = 1;
	while(n)
	{
	r = n % 10;
	a[r]++;
	if(a[r] > 1)
	{
		f = 0;
		break;
	}
	n = n / 10;
	}
	if(f==1)
	printf("%d has unique digits\n",m);
	else
	printf("All digits of %d is not unique\n",m);
	return 0;
}
