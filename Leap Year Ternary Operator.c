#include<stdio.h>
int main(){
	int y;
	printf("Enter A Year:");
	scanf("%d", &y);
	printf(y%100==0?(y%400==0?"It Is A Leap Year.":"Not A Leap Year."):(y%4==0?"It Is A Leap Year":
	"It Is NotA Leap Year"));
	return 0;
}
