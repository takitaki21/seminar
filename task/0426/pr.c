#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void){
	int i,j,t,z ;
	int a[10],b,c;
		srand((unsigned)time(NULL));
		for (i=0; i<10; i++){ 
			a[i]=rand()%60+1;
			printf("a[%d]=%d\n",i+1,a[i]);
		}
		printf("\n");
        for (i=0; i<9; i++){ 
        for (j=i+1;j<10; j++){
        	if (a[i]>a[j]){
        		t=a[i];
        		a[i]=a[j];
        		a[j]=t;

        	}
        }
	}
	for(i=0;i<10;i++){
			printf("a[%d]=%d\n",i+1,a[i]);
		}
		printf("\n");
 z=0,c=0;
for(i=0;i<10;i++){
	z=z+a[i];
	b=z-a[i];
	c=b+c;

	printf("custom%d wait time =%d\n ",i+1,b);
}
printf("all wait time sum =\t%d\n",c);

}
