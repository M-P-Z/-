#include<stdio.h>
int main()
{
	int a,b,t,r,n;
	printf("��������������");
    scanf("%d %d",&a,&b );
	//a=5;b=10;
	if(a<b){
		t=b;
		b=a;
		a=t;
	}
		r=a%b;
		n=a*b;
		while(r!=0){
			a=b;
			b=r;
			r=a%b;
		}
		printf("���Լ��Ϊ�� %d\n",b);
		printf("��С������Ϊ�� %d\n",n/b);
	return 0;
}		   		   
