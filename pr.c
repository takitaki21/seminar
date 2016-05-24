#include <stdio.h>
int stack[1000];
int p=0,i;
int a,b,w;
 void push(int i){
	stack[p++]=i;
}

int pop() {
	p--;
	i=stack[p-1];

	return(i);
}

void main(){ 
	
          switch (p) { 

              case '+':
                  a=pop();
                  b=pop();
                  push(b+a);
                  break;

              case '-':
                  a=pop();
                  b=pop();
                  push(b-a);
                  break;

              case '*':
                  a=pop();
                  b=pop();
                  push(b*a);
                  break;

              case '/':
                  a=pop();
                  b=pop();

                  if (a==0)
                      break;

                  push(b/a);
                  break;

              default: 

          }

      }

      return pop(); 


}

 