#include<stdio.h>
int main(){
	int i,ex,n,ans;
	printf("\nEnter A Base Number:");
	scanf("%d",&n);
	printf("\nEnter Exponent:");
	scanf("%d",&ex);
	ans=i=1;
	while(i<=ex){
		ans=ans*n;
		i++;
	}
	printf("\n %d To the Power %d = %d.", n,ex,ans);
	return 0;
}
