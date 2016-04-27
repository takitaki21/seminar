#include <stdio.h>

int main(){
	
	printf("please input 2 numbers.\n");
	printf("1st weight(kg).\n2nd heigh(cm).\n");
	float num1,num2;
	scanf ("%f%f",&num1,&num2);
	num2 = num2 / 100;
	printf("BMI = %f\n",num1 / num2 / num2);
	
}


