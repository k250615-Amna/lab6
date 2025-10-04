#include <stdio.h>
int main(){
	int num1,num2,check;
	printf("Enter number 1: ");
	scanf("%d" , &num1);
	printf("Enter number 2: ");
	scanf("%d" ,&num2);
	check = num1^num2;
	if(check==0){
		printf("number is equal");
	}
	else{
		printf("number is not equal");
	}
}
