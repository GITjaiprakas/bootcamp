#include<stdio.h>

int fact(int);

void pascal(int);

int combi(int,int);

int main(){

int n;

printf("Enter no of rows : ");

scanf("%d",&n);

pascal(n);

}

int fact(int n){

int i,facts=1;

for(i=n;i>1;i--){

facts=i*facts;

}

return(facts);

}

int combi(int n,int r){

return fact(n)/(fact(r)*fact(n-r));

}

void pascal(int n){

int i,j,k=1,l,r;

for(i=0;i<n;i++){

r=0;

for(j=0;j<2*n;j++){

if(j>=n-i&&j<=n+i&&k){

printf("%d",combi(i,r));

k=0;

r++;

}

else{

printf(" ");

k=1;

}

}

printf("\n");

}

}
