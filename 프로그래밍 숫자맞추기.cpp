#include<stdio.h>

int main(void){
	
	int answer=34;
	int num;
	int trial=0; 
	
	do{
		printf("enter the number");
		scanf("%d",&num);
		
		if(num>answer){
		
			printf("Too big\n");
		}
		else if(num<answer){
		
			printf("Too small\n");
		}
		
		trial=trial+1;
	}
		
	while(answer!=num);
	
	printf("good");
			
	
 return 0;
}
	 
