#include<stdio.h>
int max(int n1,int n2){
	int max;
	max=n1;
	if(n1<n2){
		max=n2;
	}
	return max;
}
int main(){
	int ans,a,b;
	printf("Enter Two Number:");
	scanf("%d%d",&a,&b);
	ans=max(a,b);
	printf("Result Is %d.",ans);
	return 0;
}
