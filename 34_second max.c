#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,max,smax;
   printf("Enter a 3 Numbers: ");
   scanf("%d %d %d", &a,&b,&c);
   if(a>b){
   	max=a;
   	smax=b;
   }
   else{
   	max=b;
   	smax=a;
   }
   if(c>max){
   	smax=max;
   	max=c;
   }
   else{
   	if(c>smax){
   		smax=c;
   	}
   }
   printf("Second Max Number Is:%d", smax);
   return 0;
}
