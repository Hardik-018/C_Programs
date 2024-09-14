#include<stdio.h>
int sum(int n1,int n2){
	int sum;
	sum=n1+n2;
	return sum;
}
int main(){
	int ans,a,b;
	printf("Enter Two Number:");
	scanf("%d%d",&a,&b);
	ans=sum(a,b);
	printf("Sum Is %d.",ans);
	return 0;
}
