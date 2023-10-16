#include<stdio.h>

int main(void){
	
	int c;
	int number=0;
	
	printf("input the string");
	
	
	while( (c=getchar()) !='\n' ){
		
		if( (c>='0') && (c<='9') ) {	// 0<=c<=9 ¾ÈµÊ  
			number++;		// number=number+1; 
		}
		else{
			number;
		}
	}	
	
	printf("the number of digits is %d",number);
	
	
	return 0;

}
