#include<stdio.h>

int main(void){
	
	int sum=0;
	int num;
	int i;
	
	printf("input the number\n");
	scanf("%d",&num);
	
	for( i=0 ; i<=num ; i++ );{
		
		sum=sum+i;
	}
	
	printf("result is %d\n",sum);
	
	return 0;
}
