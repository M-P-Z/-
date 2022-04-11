#include<stdio.h>
int main()
{
	int a,b,t,r,n;
	printf("请输入两个数：");
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
		printf("最大公约数为： %d\n",b);
		printf("最小公倍数为： %d\n",n/b);
	return 0;
}		   		   
