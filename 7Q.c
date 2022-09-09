#include<stdio.h>

void fib(int );

int main(){

int N;

printf("Enter how many terms you want to print fibonacci series : ");

scanf("%d",&N);

fib(N);

return 0;

}

void fib(int n){

int count=n-2,i=1,k=1;

printf("%d %d ",i,k);

while(count){

k=k+i;

i=k-i;

printf("%d ",k);

count--;

}

}
