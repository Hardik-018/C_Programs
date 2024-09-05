#include<stdio.h>
#define true 1
#define false 0
int main(){
	int n,i,a,b,flag;
	printf("Enter Two Numbers:");
	scanf("%d %d",&a,&b);
	for(n=a;n<=b;n++){
		if(n==1){
		   printf("Neither Prime Nor Composite.");
	    }
	    else{
		   flag=true;
		   for(i=2;i<=(n+1)/2;i++){  // Can't Be Divided After Half. 
			    if(n%i==0){
				   flag=false;
			       break;
			    }
		    }
	    }
	    if(flag==true){
		   printf("%d,",n);
	    }
	}	
	printf("\b ");
	return 0;
}
