#include<stdio.h>
char a[][20] = {" ","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
char b[][20] = {" ","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Ninteen"};
char c[][20] = {" ","Ten","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"};
char d[][20] = {" ","Hundred","Thousand","Lakh","Crore"};
void fun(int,int,int);
int main()
{	int x[9] = {0};
	long n,i;
	printf("Enter Number : ");	
	scanf("%ld",&n);
	i=0;
	while(n)
	{
	x[i++] = n % 10;
	n = n / 10;	
	}
	fun(x[8],x[7],4);
	fun(x[6],x[5],3);
	fun(x[4],x[3],2);	
	fun(0,x[2],1);
	fun(x[1],x[0],0);	
	return 0;	
}
void fun(int m,int n,int k)
{
	if(m == 0 && n != 0)
	printf("%s ",a[n]);
	else if(m == 1 && n != 0)
	printf("%s ",b[n]);
	else if(m != 0 && n == 0)
	printf("%s ",c[m]);
	else
	printf("%s %s ",c[m],a[n]);
	if(m != 0 || n != 0)
	printf("%s ",d[k]);
}
