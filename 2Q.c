#include<stdio.h>

int check( int, int);

int check2(int, int);

int main(){

int n1,n2;

printf("Enter two numbers : ");

scanf("%d %d",&n1,&n2);

if(n1==n2){

printf("hcf of %d and %d is %d",n1,n2,n1);

}

else if(n1>n2){

printf("hcf of %d and %d is %d",n1,n2,check(n1,n2));

}

else{

printf("hcf of %d and %d is %d",n1,n2,check2(n1,n2));

}

}

int check(int n1,int n2){

int d,i,h;

d=n1-n2;

if((n1%d==0)&&(n2%d==0)){

return(d);

}

else{

for(i=2;i<=d;i++){

h=d/i;

if((n1%h==0)&&(n2%h==0)){

break;

}

}

if((n1%h==0)&&(n2%h==0)){

return(h);

}

}

}

int check2(int n1,int n2){

int d,i,h;

d=n2-n1;

if((n1%d==0)&&(n2%d==0)){

return(d);

}

else{

for(i=2;i<=d;i++){

h=d/i;

if((n1%h==0)&&(n2%h==0)){

break;

}

}

if((n1%h==0)&&(n2%h==0)){

return(h);

}

}

}
