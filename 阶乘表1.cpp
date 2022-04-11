#include<stdio.h>
double A(int n);
int main(void)
{
	int i,n;
	double B;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		B=A(i);
		printf("%d!=%.0f\n",i,B);
	}
	return 0;
}
double A(int n)
{
	int i;
	double B;
	B=1;
	for(i=1;i<=n;i++){
		B=B*i;
	}
	return B;
}
