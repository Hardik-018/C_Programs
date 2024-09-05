#include<stdio.h>
#define true 1
#define false 0
int main(){
	int i,n,flag,mid;
	printf("Enter A Number:\t");
	scanf("%d",&n);
	mid=(n+1)/2;
	if(n==1){
		printf("Neither Prime Nor Composite.");
	}
	else{
		flag=1;
		for(i=2;i<=mid;i++){  // Can't Be Divided After Half. 
			if(n%i==0){
				flag=0;
			    break;
			}
		}
	}
	printf(flag==1?"Number Is Prime.":"Number Is Composite.");
	return 0;
}
