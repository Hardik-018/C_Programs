#include<stdio.h>
int main(){
	int n,i,ans;
	printf("Enter Number:");
	scanf("%d",&n);
	i=1;
	while(i<=10){
		ans=n*i;
		printf("%d x %d=%d\n\n",n,i,ans);
		i++;
	}
	return 0;
}
