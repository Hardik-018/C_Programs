#include<stdio.h>
int main(){
	int i,cnt,n;
	printf("Enter 'N' Terms:");
	scanf("%d",&n);
	cnt=i=1;
	while(cnt<=n){
		printf("%d,",i);
		i=i*-1;
		cnt++;
	}
	printf("\b.");
	return 0;
}
