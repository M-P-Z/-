#include<stdio.h>
double P(int n);
int main(void)
{
	int i,n;
	double sum=0.0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=P(i);
	}
	printf("sum=%.2f\n",sum);
	return 0;
}
double P(int n)
{
	int i;
    double a=1;
    for(i=1;i<=n;i++)
    {
    	a*=i;
	}
	return a;
}
