#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int cho,a,b;
	do{
		system("cls");
		printf("1.Addition\n2.Substraction\n3.Multiply\n4.Division\n5.Modulus\n6.Power\n7.SquareRoot\n0.Exit\nEnter Your Choice:");
		scanf("%d",&cho);
		switch(cho){
			case 1:
				printf("Enter 2 Numbers:");
				scanf("%d %d", &a,&b);
				printf("Sum Is:%d.\n",a+b);
				break;
			case 2:
			    printf("Enter 2 Numbers:");
				scanf("%d %d", &a,&b);
				printf("Difference Is:%d.\n",a-b);
				break;
			case 3:
				printf("Enter Two Numbers:");
				scanf("%d %d", &a,&b);
				printf("Product Is %d.\n",a*b);
				break;
			case 4:
				printf("Enter Two Numbers:");
				scanf("%d %d", &a,&b);
				if(a==0 || b==0){
					printf("Error! Div By Zero.\n");
				}
				else{
					printf("Qutient Is %.2f\n",(float)a/b);
				}
				break;
			case 5:
				printf("Enter Two Numbers:");
				scanf("%d %d", &a,&b);
				if(a==0 || b==0){
					printf("Error! Div By Zero\n");
				}
				else{
					printf("Remainder Is %d\n",a%b);
				}
				break;
			case 6:
				printf("Enter Two Numbers:");
				scanf("%d %d", &a,&b);
				printf("%d To The Power %d is:%.2f\n",a,b,(float)pow(a,b));
				break;
			case 7:
				printf("Enter A Numbers:");
				scanf("%d", &a);
				printf("Square Root Of %d Is:%.2f\n",a,(float)sqrt(a));
				break;
			case 0:
				break;
			default :
				printf("Invalid Choice.\n");	
		}
		printf("Press Any Key To Continue...");
        getch();
	}while(cho!=0);
	return 0;
}
