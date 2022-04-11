#include<stdio.h>
int main(){
	int prev,next;
	int flag = 0;
	scanf("%d",&prev);
	while( scanf("%d",&next)!=EOF)
		{
			if (next < prev){
				flag = 1;
				break;
			}
			next = prev; 
	    }
	if (flag==1 )
	    printf("NO");
	else
	    printf("YES");
	return 0;	 
}
