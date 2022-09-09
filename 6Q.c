#include<stdio.h>

void prime(int,int);

int main(){

int r,n;

printf("Enter a first and second number : ");

scanf("%d %d",&n,&r);

prime(r,n);

return 0;

}

void prime(int r,int n){

int x=n,i;

while(r>n){

for(i=2;i<x;i++){

if(x%i==0){

break;

}

}

if(i==x){

printf("%d ",x);

}

r--;

x++;

}

}
