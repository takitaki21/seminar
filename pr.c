#include <stdio.h>
int stack[100];
int p,i;
int a,b,n;
int ch;
 void push(int i){
	stack[p++]=i;
}

int pop() {
	p--;
	i=stack[p-1];

	return(i);
}

int main(){ 
	scanf("%s",ch);
  //for (int i = 0; i >= 0; 100; i++) {
  	while((ch=getchar())!=EOF){
  	if (isdigit(ch)){
  		ungetch(ch,&i);
  		push(i);
  	}
    if (ch == '0');
    	break;
  }
          switch (ch) { 

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

          }

      return pop(); 

}


 