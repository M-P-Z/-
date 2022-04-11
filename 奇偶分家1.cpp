#include<stdio.h>
int main(void)
{
	int count_odd,count_even,i,n,number;
	count_odd=0;
	count_even=0;
	printf("Enter %d numbers:");
	for(i=1;i<=n;i++){
		scanf("%d",&number);
		if(number%2!=0){
			count_odd++;

		}else{
			count_even++;
		}
	}
	printf("Odd:%d, Even:%d\n",count_odd, count_even);
	
	return 0;
}
