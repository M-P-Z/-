#include<stdio.h>
double fact(int n);
int main(void)
{
	int i,n;
	double P;
	printf("Enter n:");
	scanf("%d",&n);
	P=0;
	for(i=1;i<=n;i++){
		P=P+fact(i);
	}
	printf("1!+2!+3!+¡¤¡¤¡¤+%d!=%.0f\n",n,P);
	return 0;
}
double fact(int n)
{
	int i;
	double result;
	if(n<0){
		return 0;
	}
	result=1;
	for(i=1;i<=n;i++){
		result=result*i;
	}
	return result;
}
