#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void){

	int i ;
		srand((unsigned)time(NULL));
		for (i=0; i<10; i++){ 
			printf("%d\n",rand()%60+1);
		}

}