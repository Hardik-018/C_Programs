#include<stdio.h>
int main(){
	int yr;
	printf("Enter A Year:");
	scanf("%d", &yr);
	if((yr%100==0 && yr%400==0) || yr%4==0)
		printf("It Is A Leap Year.");
	else
        printf("It Is Not A Leap Year");
    return 0;    
}
