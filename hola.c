#include <stdio.h>
int main(){
	printf("Hola Mundo\n ¿como estas?");
}

int factorial(int n){
if(n==0){
return 1;
}
return n* factorial(n-1);
}
