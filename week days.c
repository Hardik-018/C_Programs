#include<stdio.h>

int main(){
	int n;        
	printf("Enter number Between 1to7: ");
	scanf("%d", &n);
	if(n==1)
     printf("Sunday");
     else if(n==2)
   	 printf("Monday");
     else if(n==3)
     printf("Tuesday");
     else if(n==4)
	 printf("wednesday");
	 else if(n==5)
	 printf("Thrusday");
	 else if(n==6)
	 printf("Friday");
	 else if(n==7)
	 printf("Saturday");
	 else if(n>7)
	 printf("Invalid Input");
	 return 0;     		 	 
 }
