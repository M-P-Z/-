#include<stdio.h>
long long fact(int n);
int main(){
	int i,n;
	long long r,sum=0;
	
  while(scanf("%d",&n)!=EOF)
  {
  sum=0;
  	for(i=1;i<=n;i++){
  	 r=fact(i);
	    sum=sum+r;	
	}
	printf("%lld\n",sum);
    }
	return 0;	
}
long long fact(int n){
	int i;
	long long product=1;
	for(i=1;i<=n;i++){
		product=product*i;
	}
	return product;
} 

