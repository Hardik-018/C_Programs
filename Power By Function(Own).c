#include<stdio.h>
int power(int n,int p){
	int i,ans;
	for(i=1,ans=1;i<=p;i++){
	ans=ans*n;
	}
	return ans;
}
int main(){
	int x,y,ans;
	printf("Enter A Number And It's Power:");
	scanf("%d %d",&x,&y);
	ans=power(x,y);
	printf("Result Is %d.",ans);
	return 0;
}
