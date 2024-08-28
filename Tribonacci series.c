#include<stdio.h>
int main(){
	int t1,t2,t3,sum,n,i;
	printf("Enter 'N' Terms:");
	scanf("%d",&n);
	t1=0;t2=0;t3=1;sum=0,i=1;
	while(i<=n){
		printf("%d,",t1);
		sum=t1+t2+t3;
		t1=t2;
		t2=t3;
		t3=sum;
		i++;
	}
	printf("\b.");
	return 0;
}
