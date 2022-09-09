#include<stdio.h>

void prime(int);

int main(){

int r;

printf("Enter a range of prime numbers : ");

scanf("%d",&r);

prime(r);

return 0;

}

void prime(int r){

int x=2,i;

while(r){

for(i=2;i<x;i++){

if(x%i==0){

break;

}

}

if(i==x){

printf("%d ",x);

r--;

}

x++;

}

}
