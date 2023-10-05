#include<stdio.h>

int main(void){
	
	int number;
	
	printf("enter the number");
	scanf("%d",&number);
	
	if(number>0){
		printf("absolute value is %d",number);
	}
	else if(number<0){
		printf("absolute value is %d",-number);
	}
	else{
		printf("absolute value is 0");
	}

	return 0;
}
