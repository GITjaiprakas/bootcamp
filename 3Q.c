#include<stdio.h>

int prime(int);

int main(){

int n,var;

printf("Enter any number : ");

scanf("%d",&n);

var=prime(n);

if(var==1){

printf("The number is prime");

}

else{

printf("the number is not a prime number");

}

return 0;

}

int prime(int n){

int i;

for(i=2;i<=n/2;i++){

if(n%i==0){

break;

}

}

if(n%i==0){

return(0);

}

else{

return(1);

}

}
