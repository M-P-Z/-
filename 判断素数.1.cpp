#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,limt,m;
	printf("Enter a number:");
	scanf("%d",&m);
	if(m<=1){
		printf("No\n");
	}else if("m==1"){
		printf("Yes\n");
	}else{
		limt=sqrt(m)+1;
		
		for(i=2;i<=limt;i++){
			if(m%i==0){
				break;
			}
		}
		if(i>limt){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
		}
    return 0;
}


