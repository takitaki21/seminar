#include <stdio.h>
int main ()
{
	int a;
	int ia,ib,ic;
	float b ;
	char c ;
	a=7;
	ia=a;
	printf("%d\n",ia);

	b=3.0; 
	ib=b;
	printf("%d\n",ib);
	
	c=10;
	ic=c;
    printf("%d\n",ic);

	printf("int 7 + float 3.0 + char 10 =%d\n",ia+ib+ic );
}
