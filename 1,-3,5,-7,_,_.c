#include<stdio.h>
int main(){
	int cnt,sign,i,n;
	printf("Enter 'N' Terms:");
	scanf("%d",&n);
	cnt=sign=i=1;
	while(cnt<=n){
		printf("%d,", i*sign);
		i=i+2;
		cnt++;
		sign=sign*-1;
	}
	printf("\b.");
	return 0;
}
