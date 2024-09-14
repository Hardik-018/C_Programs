#include<stdio.h>
int fact(int n){
	int i,f;
	for(i=n,f=1;i>=1;i--){
		f=f*i;
	}
	return f;
}
int main(){
	int x,ans;
	printf("Enter Number:");
	scanf("%d",&x);
	ans=fact(x);
	printf("Result Is %d",ans);
	return 0;
}
