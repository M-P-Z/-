#include<stdio.h>
int main(void)
{
	int shu,zimu,qita,n,i;
	char ch;
	zimu=shu=qita=0;
	printf("Enter n:");
	scanf("%d",&n);
	getchar();
	printf("Enter %d character:",n);
	for(i=1;i<=n;i++){
		ch=getchar();
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
			zimu++;
		}else if (ch>='0'&&ch<='9'){
			shu++;
		}else{
			qita++;
		}
		
		
	}
	printf("Êý=%d,×ÖÄ¸=%d,ÆäËû=%d\n",shu,zimu,qita);
	return 0;
	
}
