#include<stdio.h>




int main(){
	
	int hold;
	int num2;
	int counter = 0 ; 
	printf("Please enter 1. number :");
	scanf("%d",&hold);
	while(1)
	{
		counter++;
		printf("Please enter %d. number :", counter + 1);
		scanf("%d",&num2);
		if(hold>num2)
		{
		hold=num2;
		}
		
		if(counter == 4)
		{	
		break;
		}
	}
	printf("Your smallest number %d",hold);
}
