#include <stdio.h>
int main(void){
    int  i,n;
     i = 1 ;
     n = 0 ;

    while((n += i) <= 1000)i++;
    printf("1+2+3+...n<1000/n=%d\n",i );
        return 0 ;
}


