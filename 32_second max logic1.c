#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,smax;
   printf("Enter a 3 Numbers: ");
   scanf("%d %d %d", &a,&b,&c);
   if(a>b){
   	if(a>c){
   		if(b>c){
   			smax=b;
		   }
		 else{
		 	smax=c;
		 }  
	   }
	   smax=a;
   }
   else{
   	if(b>c){
   		if(c>a){
   			smax=c;
		   }
	     else{
		 	smax=a;
		 }   
	   }
	 else{
	 	smax=b;
	 }  
   }
   printf("Second Max Is %d", smax);
   return 0;
}
